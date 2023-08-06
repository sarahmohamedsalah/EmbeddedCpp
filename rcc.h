#ifndef RCC_H
#define RCC_H
#include "stm32f446xx.h"
 enum RCC_GpioPortName_t{
	 
   RCC_GPIO_PORT_A,
	 RCC_GPIO_PORT_B,
	 RCC_GPIO_PORT_C,
	 RCC_GPIO_PORT_D,
	 RCC_GPIO_PORT_E,
	 RCC_GPIO_PORT_H,
	
 
 };
 enum RCC_ErrorType_t{
   RCC_OK,
	 RCC_NOK,
	 RCC_DEFAULT_ERR =0XFF
 };
class rcc
{
	public :
		RCC_ErrorType_t rccErr;
	 rcc();	
	 RCC_ErrorType_t RCC_gpioPortInit(RCC_GpioPortName_t gpioPortName);
	
	private:
		

};



#endif 
