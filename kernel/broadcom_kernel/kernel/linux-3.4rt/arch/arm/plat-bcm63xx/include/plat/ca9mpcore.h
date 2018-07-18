#if defined(CONFIG_BCM_KF_ARM_BCM963XX)
/*
<:copyright-BRCM:2013:DUAL/GPL:standard

   Copyright (c) 2013 Broadcom Corporation
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

/*
 * ARM A9 MPCORE
 *
 * Platform hardware information and internal API
 */

#ifndef	__PLAT_CA9MPCORE_H
#define	__PLAT_CA9MPCORE_H

#include <mach/hardware.h>

/* MPCORE internally-connected IRQs */
#define	CA9MP_IRQ_GLOBALTIMER	27
#define	CA9MP_IRQ_LOCALTIMER	29
#define CA9MP_IRQ_WDTIMER	30

/* 
 NOTE: MPCORE physical based ontained at run-time,
 while its virtual base address is set at compile-time in memory.h
*/

/* MPCORE register offsets */
#define	CA9MP_SCU_OFF		0x0000	/* Coherency controller */
#define	CA9MP_GIC_CPUIF_OFF	0x0100	/* Interrupt controller CPU interface */
#define	CA9MP_GTIMER_OFF	0x0200	/* Global timer */
#define	CA9MP_LTIMER_OFF	0x0600	/* Local (private) timers */
#define	CA9MP_GIC_DIST_OFF	0x1000	/* Interrupt distributor registers */

#ifndef __ASSEMBLY__

extern void __init ca9mp_fixup(void);
extern void __init ca9mp_map_io(void);
extern void __init ca9mp_init_gic(void);
extern void __init ca9mp_init_early(void);
extern void __iomem * scu_base_addr(void);
extern void __cpuinit ca9mp_cpu_init(void);
extern void plat_wake_secondary_cpu(unsigned cpus, void (* _sec_entry_va)(void));

#ifdef CONFIG_PLAT_CA9_MPCORE_TIMER
extern void __init ca9mp_timer_init(unsigned long rate);
extern void ca9mp_timer_update_freq(unsigned long rate);
#endif

#endif

#endif /* __PLAT_CA9MPCORE_H */
#endif /* CONFIG_BCM_KF_ARM_BCM963XX */
