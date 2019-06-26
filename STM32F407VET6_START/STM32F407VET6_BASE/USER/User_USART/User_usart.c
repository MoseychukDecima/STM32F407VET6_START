/**
  ******************************************************************************
  *  
  *  
  *                      
  ******************************************************************************
  *
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "User_usart.h"


#ifdef __GNUC__
/* With GCC/RAISONANCE, small printf (option LD Linker->Libraries->Small printf
   set to 'Yes') calls __io_putchar() */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */


int _write (int fd, char *ptr, int len)
{
    HAL_UART_Transmit(&huart1, (uint8_t*) ptr, len, 0xFFFF);

    return len;
}

int _read (int fd, char *ptr, int len)
{

    *ptr = 0x00; // Flush the character buffer

    HAL_UART_Receive(&huart1, (uint8_t*) ptr, 1, 0xFFFF);

return 1;
}

//Реализация функции отправки одного символа:
PUTCHAR_PROTOTYPE
{
  /* Place your implementation of fputc here */
  /* e.g. write a character to the USART1 and Loop until the end of transmission */
  HAL_UART_Transmit(&huart1, (uint8_t *)&ch, 1, 0xFFFF);

  return ch;
}


