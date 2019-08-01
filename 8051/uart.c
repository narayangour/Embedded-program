#include"delays.h"
#include<reg51.h>
	sbit ds=P3^0;
sbit sh_cp=P3^1;
sbit st_cp=P3^2;


void write_74hc595(unsigned char dat)
{
unsigned char i;
for(i=0;i<=7;i++)
{
	sh_cp=0;
	ds=(dat&(0x80>>i)?1:0);
	sh_cp=1;
}
st_cp=0;
st_cp=1;
}
void main()
{
	unsigned int i;
	for(i=0;i<=255;i++)
	{
	write_74hc595(i);
	delay_ms(100);
	}	
}













