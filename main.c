#include <stm32f407xx.h>

 int main(){
	 int duration=16080;
	 int timernumber=12;
	 RCC->APB1ENR=RCC_APB1ENR_TIM12EN;
	 TIM12->PSC=2;
	 TIM12->ARR=65535;
	 while(1){
		 TIM12->CR1==TIM_CR1_CEN;
		 if(timernumber<duration){
			 timernumber++;
			 TIM12->CNT++;
		 }
			 else{
				 (TIM12->CR1)=0;
				 TIM12->CNT=1;
				 RCC-> AHB1ENR |=RCC_AHB1ENR_GPIODEN ;
				 GPIOD->MODER=GPIO_MODER_MODE15_0;
				 GPIOD->ODR^=GPIO_ODR_ODR_15;

		 }
	 }

 }
