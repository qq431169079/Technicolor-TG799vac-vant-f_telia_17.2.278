/*
<:copyright-BRCM:2014:GPL/GPL:standard

   Copyright (c) 2014 Broadcom Corporation
   All Rights Reserved

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License, version 2, as published by
the Free Software Foundation (the "GPL").

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.


A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.

:>
*/

#define HOMEPLUGD_MESSAGE_PORT 48912

typedef enum {
    HOMEPLUGD_NO_MESSAGE,
    HOMEPLUGD_DEVICES_NONE,
    HOMEPLUGD_DEVICES_ADDED,
    HOMEPLUGD_DEVICES_REMOVED,

    HOMEPLUGD_UKE_CMD_START,
    HOMEPLUGD_UKE_CMD_RANDOMIZE,
    HOMEPLUGD_UKE_RSP_SUCCESS,
    HOMEPLUGD_UKE_RSP_FAILED,
    HOMEPLUGD_UKE_RSP_TIMEOUT,

    HOMEPLUGD_IEEE_1905_FOB_REGISTER_CMD,
    HOMEPLUGD_IEEE_1905_FOB_REGISTER_RSP_OK,
    HOMEPLUGD_IEEE_1905_FOB_REGISTER_RSP_ERROR,

    HOMEPLUGD_SET_PASS_NMK,
    HOMEPLUGD_SET_PASS_NMK_SUCCESS,
    HOMEPLUGD_SET_PASS_NMK_FAILURE,

    HOMEPLUGD_DEVICE_MAC_GET,
    HOMEPLUGD_DEVICE_MAC_GET_RSP,
} homeplugd_msg_enum;

typedef enum {
    PLC_UKE,
    PLC_RANDOMIZE_KEY,
} homeplugd_event;


typedef struct {
    unsigned int type;
    unsigned int len;
} homeplugd_msg_header;

void homeplugd_send_msg(unsigned long time, unsigned long param);
