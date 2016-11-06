#include "stm32f10x.h"
#include "bsp_usart1.h"

void delay(u32 i)
{
  while(i--);
}

void LED_Gpioinit(void)
{
	GPIO_InitTypeDef f;
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE );
	f.GPIO_Pin=GPIO_Pin_0|GPIO_Pin_1;
	f.GPIO_Speed=GPIO_Speed_50MHz;
	f.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_Init(GPIOB, &f);
	GPIO_SetBits(GPIOB, GPIO_Pin_0);	
	GPIO_ResetBits(GPIOB, GPIO_Pin_1); 
}
int main(void)
{
    USART1_Config();
    LED_Gpioinit();
    for(;;)
    {	
       
    }
}
/*********************************************END OF FILE**********************/
