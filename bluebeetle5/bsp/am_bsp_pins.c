//*****************************************************************************
//
//  am_bsp_pins.c
//! @file
//!
//! @brief BSP pin configuration definitions.
//!
//! @addtogroup BSP Board Support Package (BSP)
//! @addtogroup apollo3_evb_bsp BSP for the Apollo3 Engineering Board
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

#include "am_bsp.h"

//*****************************************************************************
//
//  CLICKBEETLE_SW1 pin: ClickBeetle button.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_SW1 =
{
    .uFuncSel            = AM_HAL_PIN_19_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_ENABLE
};

//*****************************************************************************
//
//  CLICKBEETLE_D1RED pin: LED Red.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_D1RED =
{
    .uFuncSel            = AM_HAL_PIN_47_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  CLICKBEETLE_D1GREEN pin: LED Green.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_D1GREEN =
{
    .uFuncSel            = AM_HAL_PIN_46_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  CLICKBEETLE_D1BLUE pin: LED Blue.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_D1BLUE =
{
    .uFuncSel            = AM_HAL_PIN_48_GPIO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  CLICKBEETLE_TX pin: This pin is the COM_UART transmit pin.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_TX =
{
    .uFuncSel            = AM_HAL_PIN_1_UART0TX,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  CLICKBEETLE_RX pin: This pin is the COM_UART receive pin.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_RX =
{
    .uFuncSel            = AM_HAL_PIN_2_UART0RX
};

//*****************************************************************************
//
//  CLICKBEETLE_TX1 pin: This pin is the COM_UART transmit pin.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_TX1 =
{
    .uFuncSel            = AM_HAL_PIN_35_UART1TX,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  CLICKBEETLE_RX1 pin: This pin is the COM_UART receive pin.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_RX1 =
{
    .uFuncSel            = AM_HAL_PIN_25_UART1RX
};

//*****************************************************************************
//
//  CLICKBEETLE_CS1 pin: I/O Master 0 chip select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_CS1 =
{
    .uFuncSel            = AM_HAL_PIN_25_NCE25,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .uIOMnum             = 0,
    .uNCE                = 2,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  CLICKBEETLE_CS2 pin: I/O Master 0 chip select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_CS2 =
{
    .uFuncSel            = AM_HAL_PIN_35_NCE35,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .uIOMnum             = 0,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  CLICKBEETLE_CS3 pin: I/O Master 0 chip select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_CS3 =
{
    .uFuncSel            = AM_HAL_PIN_34_NCE34,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .uIOMnum             = 0,
    .uNCE                = 3,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  CLICKBEETLE_CS4 pin: I/O Master 0 chip select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_CS4 =
{
    .uFuncSel            = AM_HAL_PIN_41_NCE41,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .uIOMnum             = 0,
    .uNCE                = 1,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  CLICKBEETLE_CS5 pin: I/O Master 0 chip select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_CS5 =
{
    .uFuncSel            = AM_HAL_PIN_1_NCE1,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .uIOMnum             = 0,
    .uNCE                = 2,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  CLICKBEETLE_MISO pin: I/O Master 0 SPI MISO signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_MISO =
{
    .uFuncSel            = AM_HAL_PIN_6_M0MISO,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  CLICKBEETLE_MOSI pin: I/O Master 0 SPI MOSI signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_MOSI =
{
    .uFuncSel            = AM_HAL_PIN_7_M0MOSI,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  CLICKBEETLE_SCK pin: I/O Master 0 SPI SCK signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_SCK =
{
    .uFuncSel            = AM_HAL_PIN_5_M0SCK,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .uIOMnum             = 0
};

//*****************************************************************************
//
//  CLICKBEETLE_SCL pin: I/O Master 1 I2C clock signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_SCL =
{
    .uFuncSel            = AM_HAL_PIN_8_M1SCL,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  CLICKBEETLE_SDA pin: I/O Master 1 I2C data signal.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_SDA =
{
    .uFuncSel            = AM_HAL_PIN_9_M1SDAWIR3,
    .ePullup             = AM_HAL_GPIO_PIN_PULLUP_1_5K,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_OPENDRAIN,
    .uIOMnum             = 1
};

//*****************************************************************************
//
//  MSPI_CE0 pin: MSPI chip select.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI_CE0 =
{
    .uFuncSel            = AM_HAL_PIN_28_NCE28,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eGPOutcfg           = AM_HAL_GPIO_PIN_OUTCFG_PUSHPULL,
    .eGPInput            = AM_HAL_GPIO_PIN_INPUT_NONE,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .uIOMnum             = 6,
    .uNCE                = 0,
    .eCEpol              = AM_HAL_GPIO_PIN_CEPOL_ACTIVELOW
};

//*****************************************************************************
//
//  MSPI_D0 pin: MSPI data 0.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI_D0 =
{
    .uFuncSel            = AM_HAL_PIN_22_MSPI0,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .uIOMnum             = 6
};

//*****************************************************************************
//
//  MSPI_D1 pin: MSPI data 1.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI_D1 =
{
    .uFuncSel            = AM_HAL_PIN_26_MSPI1,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .uIOMnum             = 6
};

//*****************************************************************************
//
//  MSPI_D2 pin: MSPI data 2.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI_D2 =
{
    .uFuncSel            = AM_HAL_PIN_4_MSPI2,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .uIOMnum             = 6
};

//*****************************************************************************
//
//  MSPI_D3 pin: MSPI data 3.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI_D3 =
{
    .uFuncSel            = AM_HAL_PIN_23_MSPI13,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_8MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .uIOMnum             = 6
};

//*****************************************************************************
//
//  MSPI_SCK pin: MSPI clock.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_MSPI_SCK =
{
    .uFuncSel            = AM_HAL_PIN_24_MSPI8,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_12MA,
    .eIntDir             = AM_HAL_GPIO_PIN_INTDIR_LO2HI,
    .uIOMnum             = 6
};

//*****************************************************************************
//
//  ITM_SWO pin: ITM Serial Wire Output.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_ITM_SWO =
{
    .uFuncSel            = AM_HAL_PIN_41_SWO,
    .eDriveStrength      = AM_HAL_GPIO_PIN_DRIVESTRENGTH_2MA
};

//*****************************************************************************
//
//  CLICKBEETLE_SWDCLK pin: Cortex Serial Wire DCK.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_SWDCLK =
{
    .uFuncSel            = AM_HAL_PIN_20_SWDCK
};

//*****************************************************************************
//
//  CLICKBEETLE_SWDIO pin: Cortex Serial Wire DIO.
//
//*****************************************************************************
const am_hal_gpio_pincfg_t g_AM_BSP_GPIO_CLICKBEETLE_SWDIO =
{
    .uFuncSel            = AM_HAL_PIN_21_SWDIO
};

//*****************************************************************************
//
// End Doxygen group.
//! @}
//
//*****************************************************************************
