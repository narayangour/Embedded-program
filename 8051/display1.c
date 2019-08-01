#include"delays.h"
#include"reg51.h"
sbit sel1=P2^3;
sbit sel2=P2^2;
sbit sel3=P2^1;
sbit sel4=P2^0;
#define seg P0
code unsigned char seg_lut[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
unsigned char dp1=0xff,dp2=0xff,dp3=0xff,dp4=0xff;
//dp1=0xff;dp2=0xff;dp3=0xff;dp4=0xff;

void dispi_4_mux_segs(unsigned int n)
{
		seg=seg_lut[n/1000]&dp1;
		sel1=0;
		delay_ms(1);
		sel1=1;

		seg = seg_lut[(n/100)%10]&dp2;
		sel2 = 0;
		delay_ms(1);
		sel2 = 1;

		seg=seg_lut[(n%100)/10]&dp3;
		sel3=0;
		delay_ms(1);
		sel3=1;

		seg=seg_lut[n%10]&dp4;
		sel4=0;
		delay_ms(1);
		sel4=1;
}
main()
{
	
	sel1=0,sel2=0,sel3=0,sel4=0;
	while(1)
	{
	dispi_4_mux_segs(1548);
	}
}
