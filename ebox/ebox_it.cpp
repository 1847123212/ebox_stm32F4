#include "ebox_common.h"
extern "C" {
    
    void DMA2_Stream7_IRQHandler(void)
    {
        if(DMA_GetITStatus(DMA2_Stream7,DMA_IT_TCIF7) != RESET) 
        {
            DMA_ClearFlag(DMA2_Stream7,DMA_FLAG_TCIF7);
            DMA_Cmd(DMA2_Stream7,DISABLE);
        }
    }
    void DMA1_Stream6_IRQHandler(void)
    {
        if(DMA_GetITStatus(DMA1_Stream6,DMA_IT_TCIF6) != RESET) 
        {
            DMA_ClearFlag(DMA1_Stream6,DMA_FLAG_TCIF6);
            DMA_Cmd(DMA1_Stream6,DISABLE);
        }
    }
    void DMA1_Stream3_IRQHandler(void)
    {
        if(DMA_GetITStatus(DMA1_Stream3,DMA_IT_TCIF3) != RESET) 
        {
            DMA_ClearFlag(DMA1_Stream3,DMA_FLAG_TCIF3);
            DMA_Cmd(DMA1_Stream3,DISABLE);
        }
    }

    void DMA1_Stream4_IRQHandler(void)
    {
        if(DMA_GetITStatus(DMA1_Stream4,DMA_IT_TCIF4) != RESET) 
        {
            DMA_ClearFlag(DMA1_Stream4,DMA_FLAG_TCIF4);
            DMA_Cmd(DMA1_Stream4,DISABLE);
        }
    }
    void DMA1_Stream7_IRQHandler(void)
    {
        if(DMA_GetITStatus(DMA1_Stream7,DMA_IT_TCIF7) != RESET) 
        {
            DMA_ClearFlag(DMA1_Stream7,DMA_FLAG_TCIF7);
            DMA_Cmd(DMA1_Stream7,DISABLE);
        }
    }
}