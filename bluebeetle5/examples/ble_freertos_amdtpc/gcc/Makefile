#******************************************************************************
#
# Makefile - Rules for building the libraries, examples and docs.
#
# Copyright (c) 2019, Ambiq Micro
# All rights reserved.
# 
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
# 
# 1. Redistributions of source code must retain the above copyright notice,
# this list of conditions and the following disclaimer.
# 
# 2. Redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution.
# 
# 3. Neither the name of the copyright holder nor the names of its
# contributors may be used to endorse or promote products derived from this
# software without specific prior written permission.
# 
# Third party software included in this distribution is subject to the
# additional license terms as defined in the /docs/licenses directory.
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#
# This is part of revision 2.1.0 of the AmbiqSuite Development Package.
#
#******************************************************************************
TARGET := ble_freertos_amdtpc
COMPILERNAME := gcc
PROJECT := ble_freertos_amdtpc_gcc
CONFIG := bin

SHELL:=/bin/bash
#### Setup ####

TOOLCHAIN ?= arm-none-eabi
PART = apollo3
CPU = cortex-m4
FPU = fpv4-sp-d16
# Default to FPU hardware calling convention.  However, some customers and/or
# applications may need the software calling convention.
#FABI = softfp
FABI = hard

LINKER_FILE := ./ble_freertos_amdtpc.ld
STARTUP_FILE := ./startup_$(COMPILERNAME).c

#### Required Executables ####
CC = $(TOOLCHAIN)-gcc
GCC = $(TOOLCHAIN)-gcc
CPP = $(TOOLCHAIN)-cpp
LD = $(TOOLCHAIN)-ld
CP = $(TOOLCHAIN)-objcopy
OD = $(TOOLCHAIN)-objdump
RD = $(TOOLCHAIN)-readelf
AR = $(TOOLCHAIN)-ar
SIZE = $(TOOLCHAIN)-size
RM = $(shell which rm 2>/dev/null)

EXECUTABLES = CC LD CP OD AR RD SIZE GCC
K := $(foreach exec,$(EXECUTABLES),\
        $(if $(shell which $($(exec)) 2>/dev/null),,\
        $(info $(exec) not found on PATH ($($(exec))).)$(exec)))
$(if $(strip $(value K)),$(info Required Program(s) $(strip $(value K)) not found))

ifneq ($(strip $(value K)),)
all clean:
	$(info Tools $(TOOLCHAIN)-$(COMPILERNAME) not installed.)
	$(RM) -rf bin
else

DEFINES = -DPART_$(PART)
DEFINES+= -DAM_CUSTOM_BDADDR
DEFINES+= -DBLE_MENU
DEFINES+= -DAM_PACKAGE_BGA
DEFINES+= -DAM_FREERTOS
DEFINES+= -DAM_PART_APOLLO3
DEFINES+= -DWSF_TRACE_ENABLED
DEFINES+= -DAM_DEBUG_PRINTF

INCLUDES = -I../../../../../third_party/exactle/sw/stack/cfg
INCLUDES+= -I../../../../../third_party/exactle/ws-core/sw/util
INCLUDES+= -I../../../../../mcu/apollo3
INCLUDES+= -I../../../../../utils
INCLUDES+= -I../../../../../CMSIS/AmbiqMicro/Include
INCLUDES+= -I../../../../../third_party/exactle/sw/hci/ambiq
INCLUDES+= -I../../../../../third_party/exactle/sw/services
INCLUDES+= -I../../../../../third_party/exactle/ws-core/include
INCLUDES+= -I../../../../../third_party/exactle/sw/apps/app
INCLUDES+= -I../../../../../third_party/exactle/apollo-host/projects/common
INCLUDES+= -I../../../../../ambiq_ble/services
INCLUDES+= -I../../../../../ambiq_ble/profiles/amdtpcommon
INCLUDES+= -I../../../../../third_party/exactle/sw/hci/include
INCLUDES+= -I../../../../../third_party/exactle/sw/profiles/gap
INCLUDES+= -I../../../../../third_party/exactle/sw/sec/include
INCLUDES+= -I../../../../../third_party/FreeRTOS9/Source/include
INCLUDES+= -I../../../../../ambiq_ble/menu
INCLUDES+= -I../../../../../third_party/uecc/micro-ecc
INCLUDES+= -I../../../../..
INCLUDES+= -I../../../../../CMSIS/ARM/Include
INCLUDES+= -I../../../../../ambiq_ble/apps/amdtpc
INCLUDES+= -I../../../../../devices
INCLUDES+= -I../../../../../third_party/exactle/ws-core/sw/wsf/include
INCLUDES+= -I../../../../../third_party/exactle/sw/stack/hci
INCLUDES+= -I../../../../../third_party/exactle/sw/profiles/hid
INCLUDES+= -I../../../../../third_party/exactle/sw/profiles/bas
INCLUDES+= -I../../../../../third_party/exactle/sw/profiles/gatt
INCLUDES+= -I../../../../../third_party/exactle/ws-core/sw/wsf/ambiq
INCLUDES+= -I../../../../../third_party/exactle/sw/apps/app/include
INCLUDES+= -I../../../../../third_party/exactle/sw/hci/ambiq/apollo3
INCLUDES+= -I../../../../../third_party/exactle/sw/sec/common
INCLUDES+= -I../../../../../third_party/FreeRTOS9/Source/portable/GCC/AMapollo2
INCLUDES+= -I../../../../../third_party/exactle/sw/stack/include
INCLUDES+= -I../../../bsp
INCLUDES+= -I../../../../../ambiq_ble/profiles/amdtpc
INCLUDES+= -I../src
INCLUDES+= -I../../../../../third_party/exactle/sw/profiles/uribeacon

VPATH = ../../../../../third_party/exactle/sw/stack/cfg
VPATH+=:../../../../../devices
VPATH+=:../../../../../third_party/exactle/ws-core/sw/util
VPATH+=:../../../../../third_party/exactle/sw/stack/hci
VPATH+=:../../../../../third_party/exactle/sw/profiles/hid
VPATH+=:../../../../../third_party/exactle/sw/profiles/bas
VPATH+=:../../../../../utils
VPATH+=:../../../../../third_party/exactle/sw/profiles/gatt
VPATH+=:../../../../../third_party/exactle/ws-core/sw/wsf/ambiq
VPATH+=:../../../../../third_party/exactle/sw/hci/ambiq
VPATH+=:../../../../../third_party/exactle/sw/services
VPATH+=:../../../../../third_party/exactle/sw/apps/app/generic
VPATH+=:../../../../../third_party/exactle/sw/apps/app
VPATH+=:../../../../../third_party/exactle/sw/hci/ambiq/apollo3
VPATH+=:../../../../../third_party/exactle/sw/sec/common
VPATH+=:../../../../../third_party/FreeRTOS9/Source/portable/MemMang
VPATH+=:../src
VPATH+=:../../../../../third_party/FreeRTOS9/Source/portable/GCC/AMapollo2
VPATH+=:../../../../../ambiq_ble/profiles/amdtpcommon
VPATH+=:../../../../../third_party/exactle/sw/profiles/gap
VPATH+=:../../../../../ambiq_ble/apps/amdtpc
VPATH+=:../../../../../third_party/exactle/ws-core/sw/wsf/common
VPATH+=:../../../../../ambiq_ble/profiles/amdtpc
VPATH+=:../../../../../ambiq_ble/menu
VPATH+=:../../../../../third_party/FreeRTOS9/Source
VPATH+=:../../../../../third_party/uecc/micro-ecc
VPATH+=:../../../../../third_party/exactle/sw/apps/hidapp

SRC = cfg_stack.c
SRC += bda.c
SRC += bstream.c
SRC += calc128.c
SRC += crc32.c
SRC += print.c
SRC += terminal.c
SRC += wstr.c
SRC += hci_main.c
SRC += hid_main.c
SRC += bas_main.c
SRC += gatt_main.c
SRC += wsf_assert.c
SRC += wsf_math.c
SRC += wsf_os.c
SRC += wsf_trace.c
SRC += hci_cmd.c
SRC += hci_core.c
SRC += hci_core_ps.c
SRC += hci_evt.c
SRC += hci_tr.c
SRC += hci_vs.c
SRC += app_db.c
SRC += app_hw.c
SRC += app_ui.c
SRC += hci_drv_apollo3.c
SRC += sec_aes.c
SRC += sec_cmac.c
SRC += sec_ecc_hci.c
SRC += sec_main.c
SRC += ble_freertos_amdtpc.c
SRC += radio_task.c
SRC += rtos.c
SRC += port.c
SRC += amdtp_common.c
SRC += gap_main.c
SRC += amdtp_main.c
SRC += wsf_buf.c
SRC += wsf_efs.c
SRC += wsf_msg.c
SRC += wsf_queue.c
SRC += wsf_timer.c
SRC += amdtpc_main.c
SRC += ble_menu.c
SRC += hidapp_main.c
SRC += am_devices_button.c
SRC += am_devices_led.c
SRC += svc_batt.c
SRC += svc_bps.c
SRC += svc_core.c
SRC += svc_cps.c
SRC += svc_cscs.c
SRC += svc_dis.c
SRC += svc_gls.c
SRC += svc_gyro.c
SRC += svc_hid.c
SRC += svc_hrs.c
SRC += svc_hts.c
SRC += svc_ipss.c
SRC += svc_plxs.c
SRC += svc_px.c
SRC += svc_rscs.c
SRC += svc_scpss.c
SRC += svc_temp.c
SRC += svc_uricfg.c
SRC += svc_wdxs.c
SRC += svc_wp.c
SRC += svc_wss.c
SRC += am_util_debug.c
SRC += am_util_delay.c
SRC += am_util_faultisr.c
SRC += am_util_id.c
SRC += am_util_stdio.c
SRC += event_groups.c
SRC += list.c
SRC += queue.c
SRC += tasks.c
SRC += timers.c
SRC += app_disc.c
SRC += app_main.c
SRC += app_master.c
SRC += app_master_leg.c
SRC += app_server.c
SRC += app_slave.c
SRC += app_slave_leg.c
SRC += app_terminal.c
SRC += heap_2.c
SRC += startup_gcc.c

CSRC = $(filter %.c,$(SRC))
ASRC = $(filter %.s,$(SRC))

OBJS = $(CSRC:%.c=$(CONFIG)/%.o)
OBJS+= $(ASRC:%.s=$(CONFIG)/%.o)

DEPS = $(CSRC:%.c=$(CONFIG)/%.d)
DEPS+= $(ASRC:%.s=$(CONFIG)/%.d)

LIBS = ../../../../../mcu/apollo3/hal/gcc/bin/libam_hal.a
LIBS += ../../../../../third_party/exactle/projects/generic/stacklib/gcc/bin-cortex-m4/libstacklib.a
LIBS += ../../../../../third_party/uecc/gcc/bin/lib_uecc.a
LIBS += ../../../bsp/gcc/bin/libam_bsp.a

CFLAGS = -mthumb -mcpu=$(CPU) -mfpu=$(FPU) -mfloat-abi=$(FABI)
CFLAGS+= -ffunction-sections -fdata-sections
CFLAGS+= -MMD -MP -std=c99 -Wall -g
CFLAGS+= -O0
CFLAGS+= $(DEFINES)
CFLAGS+= $(INCLUDES)
CFLAGS+= 

LFLAGS = -mthumb -mcpu=$(CPU) -mfpu=$(FPU) -mfloat-abi=$(FABI)
LFLAGS+= -nostartfiles -static
LFLAGS+= -Wl,--gc-sections,--entry,Reset_Handler,-Map,$(CONFIG)/$(TARGET).map
LFLAGS+= -Wl,--start-group -lm -lc -lgcc $(LIBS) -Wl,--end-group
LFLAGS+= 

# Additional user specified CFLAGS
CFLAGS+=$(EXTRA_CFLAGS)

CPFLAGS = -Obinary

ODFLAGS = -S

#### Rules ####
all: directories $(CONFIG)/$(TARGET).bin

directories: $(CONFIG)

$(CONFIG):
	@mkdir -p $@

$(CONFIG)/%.o: %.c $(CONFIG)/%.d
	@echo " Compiling $(COMPILERNAME) $<" ;\
	$(CC) -c $(CFLAGS) $< -o $@

$(CONFIG)/%.o: %.s $(CONFIG)/%.d
	@echo " Assembling $(COMPILERNAME) $<" ;\
	$(CC) -c $(CFLAGS) $< -o $@

$(CONFIG)/$(TARGET).axf: $(OBJS) $(LIBS)
	@echo " Linking $(COMPILERNAME) $@" ;\
	$(CC) -Wl,-T,$(LINKER_FILE) -o $@ $(OBJS) $(LFLAGS)

$(CONFIG)/$(TARGET).bin: $(CONFIG)/$(TARGET).axf
	@echo " Copying $(COMPILERNAME) $@..." ;\
	$(CP) $(CPFLAGS) $< $@ ;\
	$(OD) $(ODFLAGS) $< > $(CONFIG)/$(TARGET).lst

clean:
	@echo "Cleaning..." ;\
	$(RM) -f $(OBJS) $(DEPS) \
	    $(CONFIG)/$(TARGET).bin $(CONFIG)/$(TARGET).axf \
	    $(CONFIG)/$(TARGET).lst $(CONFIG)/$(TARGET).map

$(CONFIG)/%.d: ;

../../../../../mcu/apollo3/hal/gcc/bin/libam_hal.a:
	$(MAKE) -C ../../../../../mcu/apollo3/hal

../../../../../third_party/uecc/gcc/bin/lib_uecc.a:
	$(MAKE) -C ../../../../../third_party/uecc

../../../bsp/gcc/bin/libam_bsp.a:
	$(MAKE) -C ../../../bsp

# Automatically include any generated dependencies
-include $(DEPS)
endif
.PHONY: all clean directories
