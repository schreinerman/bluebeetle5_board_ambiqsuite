//*****************************************************************************
//
//  am_bsp_pins.h
//! @file
//!
//! @brief BSP pin configuration definitions.
//!
//! @addtogroup BSP Board Support Package (BSP)
//! @addtogroup apollo3_bsp BSP for the Apollo3 EVB.
//! @ingroup BSP
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
// Copyright (c) 2019, Ambiq Micro
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer in the
// documentation and/or other materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its
// contributors may be used to endorse or promote products derived from this
// software without specific prior written permission.
// 
// Third party software included in this distribution is subject to the
// additional license terms as defined in the /docs/licenses directory.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
// This is part of revision 2.1.0 of the AmbiqSuite Development Package.
//
//*****************************************************************************

#ifndef AM_BSP_PINS_H
#define AM_BSP_PINS_H

#include <stdint.h>
#include <stdbool.h>
#include "am_mcu_apollo.h"

#ifdef __cplusplus
extern "C"
{
#endif

//*****************************************************************************
//
//  CLICKBEETLE_SW1 pin: ClickBeetle button.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_SW1     19
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_SW1;

//*****************************************************************************
//
//  CLICKBEETLE_D1RED pin: LED Red.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_D1RED   47
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_D1RED;

//*****************************************************************************
//
//  CLICKBEETLE_D1GREEN pin: LED Green.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_D1GREEN 46
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_D1GREEN;

//*****************************************************************************
//
//  CLICKBEETLE_D1BLUE pin: LED Blue.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_D1BLUE  48
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_D1BLUE;

//*****************************************************************************
//
//  CLICKBEETLE_TX pin: This pin is the COM_UART transmit pin.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_TX      0
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_TX;

//*****************************************************************************
//
//  CLICKBEETLE_RX pin: This pin is the COM_UART receive pin.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_RX      1
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_RX;

//*****************************************************************************
//
//  CLICKBEETLE_TX1 pin: This pin is the COM_UART transmit pin.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_TX1     35
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_TX1;

//*****************************************************************************
//
//  CLICKBEETLE_RX1 pin: This pin is the COM_UART receive pin.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_RX1     25
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_RX1;

//*****************************************************************************
//
//  CLICKBEETLE_CS1 pin: I/O Master 0 chip select.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_CS1     25
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_CS1;
#define AM_BSP_CLICKBEETLE_CS1_CHNL     2

//*****************************************************************************
//
//  CLICKBEETLE_CS2 pin: I/O Master 0 chip select.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_CS2     35
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_CS2;
#define AM_BSP_CLICKBEETLE_CS2_CHNL     0

//*****************************************************************************
//
//  CLICKBEETLE_CS3 pin: I/O Master 0 chip select.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_CS3     34
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_CS3;
#define AM_BSP_CLICKBEETLE_CS3_CHNL     3

//*****************************************************************************
//
//  CLICKBEETLE_CS4 pin: I/O Master 0 chip select.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_CS4     41
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_CS4;
#define AM_BSP_CLICKBEETLE_CS4_CHNL     1

//*****************************************************************************
//
//  CLICKBEETLE_CS5 pin: I/O Master 0 chip select.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_CS5     1
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_CS5;
#define AM_BSP_CLICKBEETLE_CS5_CHNL     2

//*****************************************************************************
//
//  CLICKBEETLE_MISO pin: I/O Master 0 SPI MISO signal.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_MISO    6
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_MISO;

//*****************************************************************************
//
//  CLICKBEETLE_MOSI pin: I/O Master 0 SPI MOSI signal.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_MOSI    7
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_MOSI;

//*****************************************************************************
//
//  CLICKBEETLE_SCK pin: I/O Master 0 SPI SCK signal.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_SCK     5
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_SCK;

//*****************************************************************************
//
//  CLICKBEETLE_SCL pin: I/O Master 1 I2C clock signal.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_SCL     8
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_SCL;

//*****************************************************************************
//
//  CLICKBEETLE_SDA pin: I/O Master 1 I2C data signal.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_SDA     9
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_SDA;

//*****************************************************************************
//
//  MSPI_CE0 pin: MSPI chip select.
//
//*****************************************************************************
#define AM_BSP_GPIO_MSPI_CE0            28
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_MSPI_CE0;
#define AM_BSP_MSPI_CE0_CHNL            0

//*****************************************************************************
//
//  MSPI_D0 pin: MSPI data 0.
//
//*****************************************************************************
#define AM_BSP_GPIO_MSPI_D0             22
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_MSPI_D0;

//*****************************************************************************
//
//  MSPI_D1 pin: MSPI data 1.
//
//*****************************************************************************
#define AM_BSP_GPIO_MSPI_D1             26
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_MSPI_D1;

//*****************************************************************************
//
//  MSPI_D2 pin: MSPI data 2.
//
//*****************************************************************************
#define AM_BSP_GPIO_MSPI_D2             4
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_MSPI_D2;

//*****************************************************************************
//
//  MSPI_D3 pin: MSPI data 3.
//
//*****************************************************************************
#define AM_BSP_GPIO_MSPI_D3             23
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_MSPI_D3;

//*****************************************************************************
//
//  MSPI_SCK pin: MSPI clock.
//
//*****************************************************************************
#define AM_BSP_GPIO_MSPI_SCK            24
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_MSPI_SCK;

//*****************************************************************************
//
//  ITM_SWO pin: ITM Serial Wire Output.
//
//*****************************************************************************
#define AM_BSP_GPIO_ITM_SWO             41
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_ITM_SWO;

//*****************************************************************************
//
//  CLICKBEETLE_SWDCLK pin: Cortex Serial Wire DCK.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_SWDCLK  20
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_SWDCLK;

//*****************************************************************************
//
//  CLICKBEETLE_SWDIO pin: Cortex Serial Wire DIO.
//
//*****************************************************************************
#define AM_BSP_GPIO_CLICKBEETLE_SWDIO   21
extern const am_hal_gpio_pincfg_t       g_AM_BSP_GPIO_CLICKBEETLE_SWDIO;


#ifdef __cplusplus
}
#endif

#endif // AM_BSP_PINS_H

//*****************************************************************************
//
// End Doxygen group.
//! @}
//
//*****************************************************************************
