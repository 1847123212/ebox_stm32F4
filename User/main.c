#include "stm32f4xx_conf.h"
#include "init.h"
#include "delay.h"


int main(void)
{ 

	InitAll();

    while(1)
    {

        LED4(0);
        delay_ms(1000);
        LED4(1);
        delay_ms(1000);
		
        printf("uart is ok\r\n");

	}
}

//�˴����һ�пո񣬷����������һ�����ơ�new line���ľ���
