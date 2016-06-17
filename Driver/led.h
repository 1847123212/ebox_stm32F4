#ifndef __LED_H
#define __LED_H
#ifdef __cplusplus
 extern "C" {
#endif
#include "stm32f4xx.h"
/*********************
OFF     ¹ØLED
ON      ¿ªLED  
TOGGLE  ·­×ªLED
**********************/
#define OFF 0 
#define ON  1
#define TOGGLE 2


#define LED1(x) ((x)? ((x%2)?GPIO_SetBits(GPIOA,GPIO_Pin_0):GPIO_ToggleBits(GPIOA,GPIO_Pin_0)):GPIO_ResetBits(GPIOA,GPIO_Pin_0))
#define LED2(x) ((x)? ((x%2)?GPIO_SetBits(GPIOA,GPIO_Pin_1):GPIO_ToggleBits(GPIOA,GPIO_Pin_1)):GPIO_ResetBits(GPIOA,GPIO_Pin_1))
#define LED3(x) ((x)? ((x%2)?GPIO_SetBits(GPIOA,GPIO_Pin_2):GPIO_ToggleBits(GPIOA,GPIO_Pin_2)):GPIO_ResetBits(GPIOA,GPIO_Pin_2))
#define LED4(x) ((x)? ((x%2)?GPIO_SetBits(GPIOA,GPIO_Pin_15):GPIO_ToggleBits(GPIOA,GPIO_Pin_15)):GPIO_ResetBits(GPIOA,GPIO_Pin_15))
#define LED5(x) ((x)? ((x%2)?GPIO_SetBits(GPIOB,GPIO_Pin_0):GPIO_ToggleBits(GPIOB,GPIO_Pin_0)):GPIO_ResetBits(GPIOB,GPIO_Pin_0))
#define LED6(x) ((x)? ((x%2)?GPIO_SetBits(GPIOB,GPIO_Pin_1):GPIO_ToggleBits(GPIOB,GPIO_Pin_1)):GPIO_ResetBits(GPIOB,GPIO_Pin_1))

void LEDInit(void);
     
#ifdef __cplusplus
}
#endif
#endif
