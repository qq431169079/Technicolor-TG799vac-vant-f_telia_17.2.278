/*
 <:copyright-BRCM:2011:DUAL/GPL:standard
 
    Copyright (c) 2011 Broadcom Corporation
    All Rights Reserved
 
 Unless you and Broadcom execute a separate written software license
 agreement governing use of this software, this software is licensed
 to you under the terms of the GNU General Public License version 2
 (the "GPL"), available at http://www.broadcom.com/licenses/GPLv2.php,
 with the following added to such license:
 
    As a special exception, the copyright holders of this software give
    you permission to link this software with independent modules, and
    to copy and distribute the resulting executable under terms of your
    choice, provided that you also meet, for each linked independent
    module, the terms and conditions of the license of that module.
    An independent module is a module which is not derived from this
    software.  The special exception does not apply to any modifications
    of the software.
 
 Not withstanding the above, under no circumstances may you combine
 this software in any way with any other Broadcom software provided
 under a license other than the GPL, without Broadcom's express prior
 written consent.
 
 :>
*/
#include "bcm_OS_Deps.h"
#include "bcmtypes.h"
#include "bcmmii.h"
#include "ethsw_phy.h"
#include "bcmsw.h"
#include "boardparms.h"
#include "bcmswaccess.h"

extern spinlock_t bcm_ethlock_phy_access;
static DEFINE_MUTEX(bcm_phy_mutex);

/*      
    Note: PHY register access need to wait 50us to complete.
    Hardware does not allow another MDIO R/W to be requested before last one
    finishes, or it will screw up forever. So we need to completely serialize
    all access passing through here.
*/
void ethsw_phy_rw_reg(int phy_id, int reg, uint16 *data, int ext_bit, int rd)
{
    uint32 reg_value, read_back, flags;
    int preempt_cnt;
    static int needIsrDelay = 0;

    phy_id &= BCM_PHY_ID_M;
    preempt_cnt = preempt_count();

    if (preempt_cnt == 0)
    {
        mutex_lock(&bcm_phy_mutex);
    }

    spin_lock_irqsave(&bcm_ethlock_phy_access, flags);

    /* If this is an ISR and a task initiated access then went to sleep, 
        we have to wait here until outstanding access finishes */
    if(preempt_cnt && needIsrDelay) 
    {
        udelay(60);
    }

taskRetry:
    reg_value = 0;
    ethsw_wreg(PAGE_CONTROL, REG_MDIO_CTRL_ADDR, (uint8 *)&reg_value, 4);

    reg_value = (ext_bit? REG_MDIO_CTRL_EXT: 0) |
        ((phy_id << REG_MDIO_CTRL_ID_SHIFT) & REG_MDIO_CTRL_ID_MASK) |
        (reg  << REG_MDIO_CTRL_ADDR_SHIFT)|
        (rd? (REG_MDIO_CTRL_READ) : (REG_MDIO_CTRL_WRITE | *data));
    ethsw_wreg(PAGE_CONTROL, REG_MDIO_CTRL_ADDR, (uint8 *)&reg_value, 4);

    if(preempt_cnt == 0)
    {
        needIsrDelay = 1;
        spin_unlock_irqrestore(&bcm_ethlock_phy_access, flags);
        msleep(1);
        spin_lock_irqsave(&bcm_ethlock_phy_access, flags);

        /* Now compare the R/W control register contents,
            if it changed, IRS has cut in and changed the register,
            we need to retry the operation. If the register content
            is the same, either no IRS cut in, or even IRS cut in it did the
            same R/W operation, so we can use the result directly in either case. */
        ethsw_rreg(PAGE_CONTROL, REG_MDIO_CTRL_ADDR, (uint8 *)&read_back, 4);
        if (read_back != reg_value)
        {
            goto taskRetry;
        }
    }
    else
    {
        udelay(60);
    }

    if (rd)
    {
        ethsw_rreg(PAGE_CONTROL, REG_MDIO_DATA_ADDR, (uint8 *)data, 2);
    }

    needIsrDelay = 0;

    spin_unlock_irqrestore(&bcm_ethlock_phy_access, flags);
    if(preempt_cnt == 0)
    {
        mutex_unlock(&bcm_phy_mutex);
    }
}

MODULE_LICENSE("GPL");

