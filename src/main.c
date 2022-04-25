#if STM32F4
    #include "stm32f4xx.h"
    #define LEDPORT (GPIOE)
    #define LED1 (3)
    #define ENABLE_GPIO_CLOCK (RCC->AHB1ENR |= RCC_AHB1ENR_GPIOEEN)
    #define _MODER    MODER
    #define GPIOMODER (GPIO_MODER_MODER3_0)
#endif

#include "stm32f407xx.h"

void ms_delay(int ms)
{
   while (ms-- > 0) {
      volatile int x=500;
      while (x-- > 0)
         __asm("nop");
   }
}

int main(void)
{
    ENABLE_GPIO_CLOCK;              // enable the clock to GPIO
    LEDPORT->_MODER |= GPIOMODER;   // set pins to be general purpose output
    
    while (1) 
    {
        ms_delay(200);
        LEDPORT->ODR ^= (1<<LED1);  // toggle diodes
    }

    return 0;
}