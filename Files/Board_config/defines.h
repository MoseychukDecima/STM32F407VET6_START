/**
 * Defines for your entire project at one place
 * 
 * @author     Alexander Moseychuk
 * @email      promavto@ntmp.ru
 * @website    http://madeonline.ru
 * @version    v1.0
 * @ide        Keil uVision 5
 * @license    GNU GPL v3
 *	
 * |----------------------------------------------------------------------
 * | 
 * | 
 * | This program is free software: you can redistribute it and/or modify
 * | it under the terms of the GNU General Public License as published by
 * | the Free Software Foundation, either version 3 of the License, or
 * | any later version.
 * |  
 * | This program is distributed in the hope that it will be useful,
 * | but WITHOUT ANY WARRANTY; without even the implied warranty of
 * | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * | GNU General Public License for more details.
 * | 
 * | You should have received a copy of the GNU General Public License
 * | along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * |----------------------------------------------------------------------
 */
#ifndef BOARD_DEFINES_H
#define BOARD_DEFINES_H

/* Put your global defines for all libraries here used in your project */
/*Поместите ваши глобальные определения для всех библиотек, используемых здесь в вашем проекте*/

/******************** Настройка светодиодов *******************/
#define LED_GPIO_PORT GPIOA
#define LED1_Pin GPIO_PIN_6
#define LED2_Pin GPIO_PIN_7

/******************* Настройка кнопок *************************/
#define KEY_GPIO_PORT GPIOE
#define KEY0_Pin GPIO_PIN_4
#define KEY1_Pin GPIO_PIN_3

#define KEY_WKUP_GPIO_PORT GPIOA
#define KEY_WKUP_Pin GPIO_PIN_0

/****************** Настройка тачскрина ***********************/
#define TOUCH_CS_PORT	 GPIOB
#define TOUCH_CS_PIN	 GPIO_PIN_12

#define TOUCH_IRQ_PORT	 GPIOC
#define TOUCH_IRQ_PIN	 GPIO_PIN_5


/****************** Настройка дисплея ***********************/
 
  /** FSMC GPIO Configuration  
  PE7   ------> FSMC_D4
  PE8   ------> FSMC_D5
  PE9   ------> FSMC_D6
  PE10   ------> FSMC_D7
  PE11   ------> FSMC_D8
  PE12   ------> FSMC_D9
  PE13   ------> FSMC_D10
  PE14   ------> FSMC_D11
  PE15   ------> FSMC_D12
  PD8   ------> FSMC_D13
  PD9   ------> FSMC_D14
  PD10   ------> FSMC_D15
  PD13   ------> FSMC_A18
  PD14   ------> FSMC_D0
  PD15   ------> FSMC_D1
  PD0   ------> FSMC_D2
  PD1   ------> FSMC_D3
  PD4   ------> FSMC_NOE
  PD5   ------> FSMC_NWE
  PD7   ------> FSMC_NE1
  */

#define TFT_RST_PORT	 GPIOB
#define TFT_RST_PIN	 GPIO_PIN_13

#define TFT_LCD_BL_PORT	 GPIOB
#define TFT_LCD_BL_PIN	 GPIO_PIN_1


/******************* Настрока встроенной памяти ****************/
 
#define FLASH_CS_GPIO_Port	 GPIOB
#define FLASH_CS_Pin	 GPIO_PIN_0
//#define		_W25QXX_USE_FREERTOS	1
#define		_W25QXX_DEBUG				1   // Вывод отладочной информации


/**************************************************************/

/**************** Настройка модуля nRF24L01 ****************/
 /* Подключение nRF24L01

    SCK SPI1  - PB3
    MISO SPI1 - PB4
    MOSI SPI1 - PB5
    CE        - PB6
    CS        - PB7
    IRQ       - PB8
*/

#define nRF24_CE_Pin GPIO_PIN_6
#define nRF24_CE_GPIO_Port GPIOB
#define nRF24_CS_Pin GPIO_PIN_7
#define nRF24_CS_GPIO_Port GPIOB
#define nRF24_IRQ_Pin GPIO_PIN_8
#define nRF24_IRQ_GPIO_Port GPIOB
/*********************************************************/

    /**SPI2 GPIO Configuration    
    PB12     ------> SPI2_NSS
    PB13     ------> SPI2_SCK
    PB14     ------> SPI2_MISO
    PB15     ------> SPI2_MOSI 
    */


#endif
