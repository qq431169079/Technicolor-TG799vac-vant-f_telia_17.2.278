# File: bcmdrivers/broadcom/char/i2c/busses/Makefile
#
# Makefile for the BCM68500 I2C Adapter+Algorithm driver.
#

obj-$(CONFIG_BCM_I2C_BUS) += i2c_bcm6xxx.o

EXTRA_CFLAGS += -I$(INC_BRCMDRIVER_PUB_PATH)/$(BRCM_BOARD)
EXTRA_CFLAGS += -I$(INC_BRCMBOARDPARMS_PATH)/$(BRCM_BOARD)
EXTRA_CFLAGS += -I$(INC_BRCMSHARED_PUB_PATH)/$(BRCM_BOARD)
EXTRA_CFLAGS += -Werror
 
clean:
	rm -f core *.o *.a *.s .*.cmd *.ko

