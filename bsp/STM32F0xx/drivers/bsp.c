/**
  ********************************  STM32F0xx  *********************************
  * @文件名     ： bsp.c
  * @作者       ： strongerHuang
  * @库版本     ： V1.5.0
  * @文件版本   ： V1.0.0
  * @日期       ： 2016年05月28日
  * @摘要       ： BSP板级支持包源文件
  ******************************************************************************/
/*----------------------------------------------------------------------------
  更新日志:
  2016-05-28 V1.0.0:初始版本
  ----------------------------------------------------------------------------*/
/* 包含的头文件 --------------------------------------------------------------*/
#include "bsp.h"
#include "stm32f0xx.h"
#include "usart.h"
#include "systick.h"
#include "led.h"



/************************************************
函数名称 ： BSP_Initializes
功    能 ： 底层初始化
参    数 ： 无
返 回 值 ： 无
作    者 ： strongerHuang
*************************************************/
void bsp_init(void)
{
   
    usart_init(); 
    led_gpio_init();
    sys_tick_init(1,0); 
}

void enable_irq(void)
{
    __enable_irq();
}

void disable_irq(void)
{
    __disable_irq();
}
	
uint32_t get_pri(void )
{
    return __get_PRIMASK();
}

void set_pri(uint32_t x)
{
    __set_PRIMASK(x);
}

