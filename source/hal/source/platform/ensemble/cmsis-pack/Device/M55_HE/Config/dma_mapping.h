/* -----------------------------------------------------------------------------
 * Copyright (c) 2022 Alif Semiconductor Inc.
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from
 * the use of this software. Permission is granted to anyone to use this
 * software for any purpose, including commercial applications, and to alter
 * it and redistribute it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software in
 *    a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * $Date:        20. August 2022
 * $Revision:    V1.0.0
 * Author:       Sudhir Sreedharan
 * Project:      Global DMA mapping for SoC
 * -------------------------------------------------------------------------- */

#ifndef DMA_MAPPING_H
#define DMA_MAPPING_H

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************/
/*                         DMA0 peripheral map                              */
/******************************************************************************/
#define UART0_DMA 0
#define UART0_RX_PERIPH_REQ 0
#define UART0_TX_PERIPH_REQ 1

#define UART1_DMA 0
#define UART1_RX_PERIPH_REQ 2
#define UART1_TX_PERIPH_REQ 3

#define UART2_DMA 0
#define UART2_RX_PERIPH_REQ 4
#define UART2_TX_PERIPH_REQ 5

#define UART3_DMA 0
#define UART3_RX_PERIPH_REQ 6
#define UART3_TX_PERIPH_REQ 7

#define SPI0_DMA 0
#define SPI0_RX_PERIPH_REQ 8
#define SPI0_TX_PERIPH_REQ 9

#define SPI1_DMA 0
#define SPI1_RX_PERIPH_REQ 10
#define SPI1_TX_PERIPH_REQ 11

#define SPI2_DMA 0
#define SPI2_RX_PERIPH_REQ 12
#define SPI2_TX_PERIPH_REQ 13

#define SPI3_DMA 0
#define SPI3_RX_PERIPH_REQ 14
#define SPI3_TX_PERIPH_REQ 15

#define I3C0_DMA 0
#define I3C0_RX_PERIPH_REQ 22
#define I3C0_TX_PERIPH_REQ 23


#define I2S0_DMA 0
#define I2S0_RX_PERIPH_REQ 24
#define I2S0_TX_PERIPH_REQ 25

#define I2S1_DMA 0
#define I2S1_RX_PERIPH_REQ 26
#define I2S1_TX_PERIPH_REQ 27

#define I2S2_DMA 0
#define I2S2_RX_PERIPH_REQ 28
#define I2S2_TX_PERIPH_REQ 29

#define I2S3_DMA 0
#define I2S3_RX_PERIPH_REQ 30
#define I2S3_TX_PERIPH_REQ 31


/******************************************************************************/
/*                         DMA2 peripheral map                              */
/******************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* DMA_MAPPING_H */
