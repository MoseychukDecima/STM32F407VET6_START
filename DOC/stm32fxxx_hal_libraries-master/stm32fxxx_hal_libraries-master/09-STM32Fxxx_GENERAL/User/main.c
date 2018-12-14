/**
 * Keil project example for GENERAL library
 *
 * Before you start, select your target, on the right of the "Load" button
 *
 * @author    Tilen Majerle
 * @email     tilen@majerle.eu
 * @website   http://stm32f4-discovery.net
 * @ide       Keil uVision 5
 * @conf      PLL parameters are set in "Options for Target" -> "C/C++" -> "Defines"
 * @packs     STM32F4xx/STM32F7xx Keil packs are requred with HAL driver support
 * @stdperiph STM32F4xx/STM32F7xx HAL drivers required
 */
/* Include core modules */
#include "stm32fxxx_hal.h"
/* Include my libraries here */
#include "defines.h"
#include "tm_stm32_disco.h"
#include "tm_stm32_delay.h"
#include "tm_stm32_general.h"
#include "tm_stm32_usart.h"

int main(void) {
	/* Init system clock for maximum system speed */
	TM_RCC_InitSystem();
	
	/* Init HAL layer */
	HAL_Init();
	
	/* Initialize delay */
	TM_DELAY_Init();
	
	/* Initialize leds on board */
	TM_DISCO_LedInit();
	
	/* Init button */
	TM_DISCO_ButtonInit();
	
	/* Init USART6, TX: PC6, 921600 baud */
	TM_USART_Init(USART6, TM_USART_PinsPack_1, 921600);
	
	/* Get system reset source and clear flags after read */
	printf("System reset source: %d\n", (uint8_t)TM_GENERAL_GetResetSource(1));
	
	/* Get system reset source and clear flags after read */
	/* You should see number which corresponds to "None", because we cleared flags in statement above */
	printf("System reset source: %d\n", (uint8_t)TM_GENERAL_GetResetSource(1));
	
	/* Get system core and PCLK1 (Peripheral Clock 1, APB1) clocks */
	printf("System core clock: %u Hz; PCLK1 clock: %u Hz\n", 
		TM_GENERAL_GetClockSpeed(TM_GENERAL_Clock_SYSCLK),
		TM_GENERAL_GetClockSpeed(TM_GENERAL_Clock_PCLK1)
	);
	
	while (1) {
		/* If button pressed */
		if (TM_DISCO_ButtonOnPressed()) {
			/* Send to USER */
			printf("Software reset will happen in a moment\n");
			/* Wait a little */
			Delayms(500);
			/* Perform system software reset */
			TM_GENERAL_SystemReset();
		}
	}
}

/* Called before system reset */
void TM_GENERAL_SystemResetCallback(void) {
	/* Print to user */
	printf("System reset callback\n");
	
	/* A little delay */
	Delayms(10);
}

/* Called from printf */
int fputc(int ch, FILE* f) {
	/* Send over USART */
	TM_USART_Putc(USART6, ch);
	
	/* Return character */
	return ch;
}
