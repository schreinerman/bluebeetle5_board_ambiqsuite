bin/rtos.o: ../src/rtos.c ../../../../../mcu/apollo3/am_mcu_apollo.h \
 ../../../../../CMSIS/AmbiqMicro/Include/apollo3.h \
 ../../../../../CMSIS/ARM/Include/core_cm4.h \
 ../../../../../CMSIS/ARM/Include/cmsis_version.h \
 ../../../../../CMSIS/ARM/Include/cmsis_compiler.h \
 ../../../../../CMSIS/ARM/Include/cmsis_gcc.h \
 ../../../../../CMSIS/ARM/Include/mpu_armv7.h \
 ../../../../../CMSIS/AmbiqMicro/Include/system_apollo3.h \
 ../../../../../mcu/apollo3/regs/am_reg_base_addresses.h \
 ../../../../../mcu/apollo3/regs/am_reg_macros.h \
 ../../../../../mcu/apollo3/regs/am_reg_adc.h \
 ../../../../../mcu/apollo3/regs/am_reg_apbdma.h \
 ../../../../../mcu/apollo3/regs/am_reg_bleif.h \
 ../../../../../mcu/apollo3/regs/am_reg_cachectrl.h \
 ../../../../../mcu/apollo3/regs/am_reg_clkgen.h \
 ../../../../../mcu/apollo3/regs/am_reg_ctimer.h \
 ../../../../../mcu/apollo3/regs/am_reg_gpio.h \
 ../../../../../mcu/apollo3/regs/am_reg_iom.h \
 ../../../../../mcu/apollo3/regs/am_reg_ioslave.h \
 ../../../../../mcu/apollo3/regs/am_reg_itm.h \
 ../../../../../mcu/apollo3/regs/am_reg_jedec.h \
 ../../../../../mcu/apollo3/regs/am_reg_mcuctrl.h \
 ../../../../../mcu/apollo3/regs/am_reg_mspi.h \
 ../../../../../mcu/apollo3/regs/am_reg_nvic.h \
 ../../../../../mcu/apollo3/regs/am_reg_pdm.h \
 ../../../../../mcu/apollo3/regs/am_reg_pwrctrl.h \
 ../../../../../mcu/apollo3/regs/am_reg_rstgen.h \
 ../../../../../mcu/apollo3/regs/am_reg_rtc.h \
 ../../../../../mcu/apollo3/regs/am_reg_security.h \
 ../../../../../mcu/apollo3/regs/am_reg_sysctrl.h \
 ../../../../../mcu/apollo3/regs/am_reg_systick.h \
 ../../../../../mcu/apollo3/regs/am_reg_tpiu.h \
 ../../../../../mcu/apollo3/regs/am_reg_uart.h \
 ../../../../../mcu/apollo3/regs/am_reg_vcomp.h \
 ../../../../../mcu/apollo3/regs/am_reg_wdt.h \
 ../../../../../mcu/apollo3/hal/am_hal_status.h \
 ../../../../../mcu/apollo3/hal/am_hal_sysctrl.h \
 ../../../../../mcu/apollo3/hal/am_hal_adc.h \
 ../../../../../mcu/apollo3/hal/am_hal_ble.h \
 ../../../../../mcu/apollo3/hal/am_hal_global.h \
 ../../../../../mcu/apollo3/hal/am_hal_status.h \
 ../../../../../mcu/apollo3/hal/am_hal_ble_patch.h \
 ../../../../../mcu/apollo3/hal/am_hal_burst.h \
 ../../../../../mcu/apollo3/hal/am_hal_cachectrl.h \
 ../../../../../mcu/apollo3/hal/am_hal_clkgen.h \
 ../../../../../mcu/apollo3/hal/am_hal_cmdq.h \
 ../../../../../mcu/apollo3/hal/am_hal_ctimer.h \
 ../../../../../mcu/apollo3/hal/am_hal_debug.h \
 ../../../../../mcu/apollo3/hal/am_hal_flash.h \
 ../../../../../mcu/apollo3/hal/am_hal_global.h \
 ../../../../../mcu/apollo3/hal/am_hal_gpio.h \
 ../../../../../mcu/apollo3/hal/am_hal_interrupt.h \
 ../../../../../mcu/apollo3/hal/am_hal_iom.h \
 ../../../../../mcu/apollo3/hal/am_hal_sysctrl.h \
 ../../../../../mcu/apollo3/hal/am_hal_ios.h \
 ../../../../../mcu/apollo3/hal/am_hal_itm.h \
 ../../../../../mcu/apollo3/hal/am_hal_mcuctrl.h \
 ../../../../../mcu/apollo3/hal/am_hal_mspi.h \
 ../../../../../mcu/apollo3/hal/am_hal_pdm.h \
 ../../../../../mcu/apollo3/hal/am_hal_pin.h \
 ../../../../../mcu/apollo3/hal/am_hal_pwrctrl.h \
 ../../../../../mcu/apollo3/hal/am_hal_pwrctrl_internal.h \
 ../../../../../mcu/apollo3/hal/am_hal_queue.h \
 ../../../../../mcu/apollo3/hal/am_hal_reset.h \
 ../../../../../mcu/apollo3/hal/am_hal_rtc.h \
 ../../../../../mcu/apollo3/hal/am_hal_secure_ota.h \
 ../../../../../mcu/apollo3/hal/am_hal_stimer.h \
 ../../../../../mcu/apollo3/hal/am_hal_security.h \
 ../../../../../mcu/apollo3/hal/am_hal_systick.h \
 ../../../../../mcu/apollo3/hal/am_hal_tpiu.h \
 ../../../../../mcu/apollo3/hal/am_hal_uart.h \
 ../../../../../mcu/apollo3/hal/am_hal_wdt.h ../../../bsp/am_bsp.h \
 ../../../bsp/am_bsp_pins.h ../../../../../devices/am_devices_led.h \
 ../../../../../devices/am_devices_button.h \
 ../../../../../third_party/FreeRTOS9/Source/include/FreeRTOS.h \
 ../src/FreeRTOSConfig.h \
 ../../../../../third_party/FreeRTOS9/Source/include/projdefs.h \
 ../../../../../third_party/FreeRTOS9/Source/include/portable.h \
 ../../../../../third_party/FreeRTOS9/Source/include/deprecated_definitions.h \
 ../../../../../third_party/FreeRTOS9/Source/portable/GCC/AMapollo2/portmacro.h \
 ../../../../../third_party/FreeRTOS9/Source/include/mpu_wrappers.h \
 ../../../../../third_party/FreeRTOS9/Source/include/task.h \
 ../../../../../third_party/FreeRTOS9/Source/include/list.h \
 ../../../../../third_party/FreeRTOS9/Source/include/queue.h \
 ../../../../../third_party/FreeRTOS9/Source/include/portable.h \
 ../src/ble_freertos_ancs.h ../../../../../utils/am_util.h \
 ../../../../../utils/am_util_debug.h \
 ../../../../../utils/am_util_delay.h ../../../../../utils/am_util_id.h \
 ../../../../../utils/am_util_regdump.h \
 ../../../../../utils/am_util_stdio.h \
 ../../../../../utils/am_util_string.h \
 ../../../../../utils/am_util_time.h ../../../../../utils/am_util_ble.h \
 ../../../../../third_party/FreeRTOS9/Source/include/semphr.h \
 ../../../../../third_party/FreeRTOS9/Source/include/queue.h \
 ../../../../../third_party/FreeRTOS9/Source/include/event_groups.h \
 ../../../../../third_party/FreeRTOS9/Source/include/timers.h \
 ../../../../../third_party/FreeRTOS9/Source/include/task.h \
 ../src/radio_task.h

../../../../../mcu/apollo3/am_mcu_apollo.h:

../../../../../CMSIS/AmbiqMicro/Include/apollo3.h:

../../../../../CMSIS/ARM/Include/core_cm4.h:

../../../../../CMSIS/ARM/Include/cmsis_version.h:

../../../../../CMSIS/ARM/Include/cmsis_compiler.h:

../../../../../CMSIS/ARM/Include/cmsis_gcc.h:

../../../../../CMSIS/ARM/Include/mpu_armv7.h:

../../../../../CMSIS/AmbiqMicro/Include/system_apollo3.h:

../../../../../mcu/apollo3/regs/am_reg_base_addresses.h:

../../../../../mcu/apollo3/regs/am_reg_macros.h:

../../../../../mcu/apollo3/regs/am_reg_adc.h:

../../../../../mcu/apollo3/regs/am_reg_apbdma.h:

../../../../../mcu/apollo3/regs/am_reg_bleif.h:

../../../../../mcu/apollo3/regs/am_reg_cachectrl.h:

../../../../../mcu/apollo3/regs/am_reg_clkgen.h:

../../../../../mcu/apollo3/regs/am_reg_ctimer.h:

../../../../../mcu/apollo3/regs/am_reg_gpio.h:

../../../../../mcu/apollo3/regs/am_reg_iom.h:

../../../../../mcu/apollo3/regs/am_reg_ioslave.h:

../../../../../mcu/apollo3/regs/am_reg_itm.h:

../../../../../mcu/apollo3/regs/am_reg_jedec.h:

../../../../../mcu/apollo3/regs/am_reg_mcuctrl.h:

../../../../../mcu/apollo3/regs/am_reg_mspi.h:

../../../../../mcu/apollo3/regs/am_reg_nvic.h:

../../../../../mcu/apollo3/regs/am_reg_pdm.h:

../../../../../mcu/apollo3/regs/am_reg_pwrctrl.h:

../../../../../mcu/apollo3/regs/am_reg_rstgen.h:

../../../../../mcu/apollo3/regs/am_reg_rtc.h:

../../../../../mcu/apollo3/regs/am_reg_security.h:

../../../../../mcu/apollo3/regs/am_reg_sysctrl.h:

../../../../../mcu/apollo3/regs/am_reg_systick.h:

../../../../../mcu/apollo3/regs/am_reg_tpiu.h:

../../../../../mcu/apollo3/regs/am_reg_uart.h:

../../../../../mcu/apollo3/regs/am_reg_vcomp.h:

../../../../../mcu/apollo3/regs/am_reg_wdt.h:

../../../../../mcu/apollo3/hal/am_hal_status.h:

../../../../../mcu/apollo3/hal/am_hal_sysctrl.h:

../../../../../mcu/apollo3/hal/am_hal_adc.h:

../../../../../mcu/apollo3/hal/am_hal_ble.h:

../../../../../mcu/apollo3/hal/am_hal_global.h:

../../../../../mcu/apollo3/hal/am_hal_status.h:

../../../../../mcu/apollo3/hal/am_hal_ble_patch.h:

../../../../../mcu/apollo3/hal/am_hal_burst.h:

../../../../../mcu/apollo3/hal/am_hal_cachectrl.h:

../../../../../mcu/apollo3/hal/am_hal_clkgen.h:

../../../../../mcu/apollo3/hal/am_hal_cmdq.h:

../../../../../mcu/apollo3/hal/am_hal_ctimer.h:

../../../../../mcu/apollo3/hal/am_hal_debug.h:

../../../../../mcu/apollo3/hal/am_hal_flash.h:

../../../../../mcu/apollo3/hal/am_hal_global.h:

../../../../../mcu/apollo3/hal/am_hal_gpio.h:

../../../../../mcu/apollo3/hal/am_hal_interrupt.h:

../../../../../mcu/apollo3/hal/am_hal_iom.h:

../../../../../mcu/apollo3/hal/am_hal_sysctrl.h:

../../../../../mcu/apollo3/hal/am_hal_ios.h:

../../../../../mcu/apollo3/hal/am_hal_itm.h:

../../../../../mcu/apollo3/hal/am_hal_mcuctrl.h:

../../../../../mcu/apollo3/hal/am_hal_mspi.h:

../../../../../mcu/apollo3/hal/am_hal_pdm.h:

../../../../../mcu/apollo3/hal/am_hal_pin.h:

../../../../../mcu/apollo3/hal/am_hal_pwrctrl.h:

../../../../../mcu/apollo3/hal/am_hal_pwrctrl_internal.h:

../../../../../mcu/apollo3/hal/am_hal_queue.h:

../../../../../mcu/apollo3/hal/am_hal_reset.h:

../../../../../mcu/apollo3/hal/am_hal_rtc.h:

../../../../../mcu/apollo3/hal/am_hal_secure_ota.h:

../../../../../mcu/apollo3/hal/am_hal_stimer.h:

../../../../../mcu/apollo3/hal/am_hal_security.h:

../../../../../mcu/apollo3/hal/am_hal_systick.h:

../../../../../mcu/apollo3/hal/am_hal_tpiu.h:

../../../../../mcu/apollo3/hal/am_hal_uart.h:

../../../../../mcu/apollo3/hal/am_hal_wdt.h:

../../../bsp/am_bsp.h:

../../../bsp/am_bsp_pins.h:

../../../../../devices/am_devices_led.h:

../../../../../devices/am_devices_button.h:

../../../../../third_party/FreeRTOS9/Source/include/FreeRTOS.h:

../src/FreeRTOSConfig.h:

../../../../../third_party/FreeRTOS9/Source/include/projdefs.h:

../../../../../third_party/FreeRTOS9/Source/include/portable.h:

../../../../../third_party/FreeRTOS9/Source/include/deprecated_definitions.h:

../../../../../third_party/FreeRTOS9/Source/portable/GCC/AMapollo2/portmacro.h:

../../../../../third_party/FreeRTOS9/Source/include/mpu_wrappers.h:

../../../../../third_party/FreeRTOS9/Source/include/task.h:

../../../../../third_party/FreeRTOS9/Source/include/list.h:

../../../../../third_party/FreeRTOS9/Source/include/queue.h:

../../../../../third_party/FreeRTOS9/Source/include/portable.h:

../src/ble_freertos_ancs.h:

../../../../../utils/am_util.h:

../../../../../utils/am_util_debug.h:

../../../../../utils/am_util_delay.h:

../../../../../utils/am_util_id.h:

../../../../../utils/am_util_regdump.h:

../../../../../utils/am_util_stdio.h:

../../../../../utils/am_util_string.h:

../../../../../utils/am_util_time.h:

../../../../../utils/am_util_ble.h:

../../../../../third_party/FreeRTOS9/Source/include/semphr.h:

../../../../../third_party/FreeRTOS9/Source/include/queue.h:

../../../../../third_party/FreeRTOS9/Source/include/event_groups.h:

../../../../../third_party/FreeRTOS9/Source/include/timers.h:

../../../../../third_party/FreeRTOS9/Source/include/task.h:

../src/radio_task.h: