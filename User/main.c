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

//此处多打一行空格，否则编译起会多一条类似“new line”的警告
