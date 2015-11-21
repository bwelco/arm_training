#include "2440_GPIO.h"


// 1.设置gp*con某一位为0时,输入。 1,输出  复位为0
// 2.输入时可读取引脚状态  输出时可控制输出点平高低   复位为0
#define LED1 (1 << (5*2))   //GPB5
#define LED2 (1 << (6*2))   //GPB6
#define LED3 (1 << (7*2))   //GPB7
#define LED4 (1 << (8*2))   //GPB8

#define KEY1 (~(3 << (0*2)))  //GPG0
#define KEY2 (~(3 << (3*2)))  //GPG3
#define KEY3 (~(3 << (5*2)))  //GPG5
#define KEY4 (~(3 << (6*2)))  //GPG6
#define KEY5 (~(3 << (7*2)))  //GPG7
#define KEY6 (~(3 << (11*2)))  //GPG11


int main()
{
	unsigned long dwdata;
    /*配置led1 led2 led3输出*/
    GPBCON |= (LED1 | LED2 | LED3 | LED4);
    /*配置key123456为输入*/
    GPGCON = KEY1 & KEY2 & KEY3 & KEY4 & KEY5 & KEY6;

    while(1)
    {
    	dwdata = GPGDAT;
    	int mask1, mask2, mask3, mask4 = 0;
    	/*key1*/
    	if(GPGDAT & (1 << 0))
    	{
    		if(mask1 == 0)
    		{
    			GPBDAT |= (1 << 5);
    			mask1 = 1;
    			continue;
    		}
    		else
    		{
    			GPBDAT &= ~(1 << 5);
    			mask1 = 0;
    			continue;
    		}
    	}
    	
    	/*key2*/
    	if(GPGDAT & (1 << 3))
    	{
    		if(mask2 == 0)
    		{
    			GPBDAT |= (1 << 6);
    			mask2 = 1;
    			continue;
    		}
    		else
    		{
    			GPBDAT &= ~(1 << 6);
    			mask2 = 0;
    			continue;
    		}
    	}
    	
    	/*key3*/
    	if(GPGDAT & (1 << 5))
    	{
    		if(mask3 == 0)
    		{
    			GPBDAT |= (1 << 7);
    			mask3 = 1;
    			continue;
    		}
    		else
    		{
    			GPBDAT &= ~(1 << 7);
    			mask3 = 0;
    			continue;
    		}
    	}
    	
    	/*key4*/
    	if(GPGDAT & (1 << 6))
    	{
    		if(mask4 == 0)
    		{
    			GPBDAT |= (1 << 8);
    			mask4 = 1;
    			continue;
    		}
    		else
    		{
    			GPBDAT &= ~(1 << 8);
    			mask4 = 0;
    			continue;
    		}
    	}
    	
    }
	return 0;
}
