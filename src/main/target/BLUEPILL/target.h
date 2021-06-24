/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "BLUEPILL" // CopterControl 3D

#define LED0_PIN                PC13

#define BEEPER                  PA15

#define USE_VCP
#define USE_UART1
#define USE_UART3

#define SERIAL_PORT_COUNT       3

#ifdef USE_UART1_RX_DMA
#undef USE_UART1_RX_DMA
#endif

#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define GYRO
#define USE_FAKE_GYRO

#define USE_ADC
#define VBAT_ADC_PIN            PA4

#undef MAG

#define USE_SERVOS

//#undef LED_STRIP
#define DEFAULT_RX_FEATURE      FEATURE_RX_PPM

// IO - from schematics
#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xe000 //PC13,14,15

#define USABLE_TIMER_CHANNEL_COUNT 15
#define USED_TIMERS             ( TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4) )
