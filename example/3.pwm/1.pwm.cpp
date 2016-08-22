/**
  ******************************************************************************
  * @file    pwm.cpp
  * @author  shentq
  * @version V1.2
  * @date    2016/08/14
  * @brief   ebox application example .
  ******************************************************************************
  * @attention
  *
  * No part of this software may be used for any commercial activities by any form 
  * or means, without the prior written consent of shentq. This specification is 
  * preliminary and is subject to change at any time without notice. shentq assumes
  * no responsibility for any errors contained herein.
  * <h2><center>&copy; Copyright 2015 shentq. All Rights Reserved.</center></h2>
  ******************************************************************************
  */


/* Includes ------------------------------------------------------------------*/


#include "ebox.h"
#include "math.h"

PWM pwm1(&PA0,TIM2,1);

void setup()
{
    ebox_init();
    uart1.begin(115200);
    pwm1.begin(10000, 500);
    pwm1.set_oc_polarity(1);
    uart1.printf("timer source frq = %dMhz\r\n",pwm1.get_timer_source_clock()/1000000);
    uart1.printf("max frq 		= %dKhz\r\n",pwm1.get_max_frq()/1000);
    uart1.printf("get_accuracy  = %f\r\n",pwm1.get_accuracy());
}

float x;
uint16_t y;

int main(void)
{
    setup();

    while(1)
    {
        x = x + PI * 0.01;
        if(x >= PI)x = 0;
        y = 2000 - (sin(x) + 1) * 1000;

        pwm1.set_duty(y);
        delay_ms(10);
    }

}




