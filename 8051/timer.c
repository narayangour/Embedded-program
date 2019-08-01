	#include<reg51.h>
	timer_delay4752();
	timer_delay1728();
main()
{
//	timer_delay4752();
	timer_delay1728();
	while(1);
}
timer_delay1728()
{
TMOD=0x00;
	TH0=0xCE;TL0=0x07;
	TR0=1;
	while(TF0==0);
	TR0=0;
	TF0=0;
}

timer_delay4752()
	{
	TMOD=0x00;
	TH0=0x77;TL0=0x04;
	TR0=1;
	while(TF0==0);
	TR0=0;
	TF0=0;
	}

