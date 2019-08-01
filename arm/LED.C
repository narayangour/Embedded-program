#include<lpc214x.h>

#include"delay.h"
#define LED 1<<7
#define SW (IOPIN0 & 1<<0)

int main(void)
{
	IODIR0=LED;
	while(1)
	{
		IOSET0=LED;
		delay_ms(100);
		IOCLR0=LED;
		delay_ms(100);
			/*if(SW==0)
				IOSET0=LED;
			else
				IOCLR0=LED;
*/
	}
}
