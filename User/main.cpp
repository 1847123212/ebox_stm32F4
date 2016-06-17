#include "stm32f4xx_conf.h"
#include "init.h"
#include "stdio.h"
#include "stdlib.h"
#include "ebox.h"
#include "../edriver/button.h"

BUTTON btn(&PB3,1);
void test()
{
    PB4.toggle();
}
int main(void)
{ 
    ebox_init();
    btn.begin();
    uart1.begin(115200,1);
    uart2.begin(115200,1);
    uart3.begin(115200,0);
    uart1.attach_rx_interrupt(test);
    uart2.attach_rx_interrupt(test);
    uart3.attach_rx_interrupt(test);
    PA15.mode(OUTPUT_PP);
    PB4.mode(OUTPUT_PP);
    while(1)
    {
        uart1.printf("usart1 test\r\n");
        uart2.printf("usart2 test\r\n");
        uart3.printf("usart3 test\r\n");
        PA15.toggle();
        delay_ms(1000);



	}
}

//此处多打一行空格，否则编译起会多一条类似“new line”的警告
