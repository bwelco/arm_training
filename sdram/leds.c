#include "2440addr.h"

void  wait(volatile unsigned long dly)
{
	for(; dly > 0; dly--);
}

int main(void)
{
	unsigned long i = 5;

	rGPBCON = (1 << 10) | (1 << 12) | (1 << 14) | (1 << 16);		// œ«LED1-4¶ÔÓŠµÄGPB4žöÒýœÅÉèÎªÊä³ö

	while(1){
		wait(50000);
		rGPBDAT = (~(1 << i));	 	// žùŸÝiµÄÖµ£¬µãÁÁLED1-4
		if(++i == 9)
			i = 5;
	}

	return 0;
}