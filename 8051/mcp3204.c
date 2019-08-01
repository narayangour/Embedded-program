#include<reg51.h>

sbit clk=P2^4;
sbit din=P2^5;
sbit dout=P2^6;
sbit _cs=P2^7;


float read_adc_mcp3204(unsigned char chNo)
{
		unsigned int adc_val=0;
		char i;
		bit d1,d0;
	if(chNo==0)
	{
	d1=d0=0;
	}
	else if(chNo==1)
	{
	d1=0,d0=1;		
	}
	else if(chNo==2)
	{
	d1=1,d0=0;		
	}
	else
	{
	d1=1,d0=1;		
	}
	_cs=din=dout=clk=1;
	_cs=0;
	clk=0;clk=1;
	clk=0;clk=1;
	clk=0;clk=1;
	clk=0;din=d1;clk=1;
	clk=0;din=d0;clk=1;
	clk=0;clk=1;
	clk=0;clk=1;
	for(i=11;i>=0;i--)
	{
	clk=0;clk=1;
	if(dout)
	{
	adc_val|=1<<i;
	}
	_cs=1;
	return ((adc_val*5.0)/4095);	
	}	
}
