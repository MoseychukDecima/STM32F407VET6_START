/******************************************************************************
 * The MIT License
 *
 * Copyright (c) 2010 Bryan Newbold.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *****************************************************************************/

/**
 * @file fsmc.c
 * @brief Flexible static memory controller support.
 */

 /*
 * Arduino srl - www.arduino.org
 * 2016 Jun 9: Edited Francesco Alessi (alfran) - francesco@arduino.org
 */

#include "fsmc.h"
#include "gpio.h"

/**
 * Configure FSMC GPIOs for use with SRAM.
 */
void fsmc_sram_init_gpios(void) {
    /* Data lines... */
    gpio_set_mode(GPIOD_dev,  0, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOD_dev,  1, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOD_dev,  8, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOD_dev,  9, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOD_dev, 10, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOD_dev, 14, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOD_dev, 15, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOE_dev,  7, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOE_dev,  8, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOE_dev,  9, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOE_dev, 10, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOE_dev, 11, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOE_dev, 12, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOE_dev, 13, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOE_dev, 14, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOE_dev, 15, GPIO_AF_OUTPUT_PP);

    /* Address lines... */
    gpio_set_mode(GPIOD_dev, 11, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOD_dev, 12, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOD_dev, 13, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOF_dev,  0, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOF_dev,  1, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOF_dev,  2, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOF_dev,  3, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOF_dev,  4, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOF_dev,  5, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOF_dev, 12, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOF_dev, 13, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOF_dev, 14, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOF_dev, 15, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOG_dev,  0, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOG_dev,  1, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOG_dev,  2, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOG_dev,  3, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOG_dev,  4, GPIO_AF_OUTPUT_PP);
    gpio_set_mode(GPIOG_dev,  5, GPIO_AF_OUTPUT_PP);

    /* And control lines... */
    gpio_set_mode(GPIOD_dev,  4, GPIO_AF_OUTPUT_PP);   // NOE
    gpio_set_mode(GPIOD_dev,  5, GPIO_AF_OUTPUT_PP);   // NWE

    gpio_set_mode(GPIOD_dev,  7, GPIO_AF_OUTPUT_PP);   // NE1
    gpio_set_mode(GPIOG_dev,  9, GPIO_AF_OUTPUT_PP);   // NE2
    gpio_set_mode(GPIOG_dev, 10, GPIO_AF_OUTPUT_PP);   // NE3
    gpio_set_mode(GPIOG_dev, 12, GPIO_AF_OUTPUT_PP);   // NE4

    gpio_set_mode(GPIOE_dev,  0, GPIO_AF_OUTPUT_PP);   // NBL0
    gpio_set_mode(GPIOE_dev,  1, GPIO_AF_OUTPUT_PP);   // NBL1
}
