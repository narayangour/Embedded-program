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
void dispf_4_mux_segs(float f)
{
	int t;
	if(f>0.0 && f<10.0)
	{
		t=f*1000;dp1=0x7f;
	}	

	else if(f>10.0 && f<100.0)
	{
		t=f*100;dp2=0x7f;
	}
	else if(f>100.0 && f<1000.0)
	{
		t=f*10;	dp3=0x7f;
	}
	dispi_4_mux_segs(t);
}
void dispi_2_mux_segs(unsigned char n,int t)
{
	if(t==0)
	{
		seg=seg_lut[n/10];
		sel3=0;	
		delay_ms(1);
		sel3=1;	
	
		seg=seg_lut[n%10];
		sel4=0;
		delay_ms(1);
		sel4=1;			

	}	
	else
	{
	seg=seg_lut[n/10];
	sel1=0;
	delay_ms(1);
	sel1=0;
		
	seg=seg_lut[n%10];
	sel2=0;
	delay_ms(1);
	sel2=1;
	}

}
void disp2i_4_mux_segs(unsigned int n)
{

unsigned char nod=0,i;
unsigned char t=n;
	while(t)
	{
		nod++;
		t=t/10;
	}
		i=nod;
	while(n)
	{
		seg=seg_lut[n%10];
		P2=P2 & (~(1<<(nod-i)));
	delay_ms(1);
	P2=0xff;
	n=n/10;
	i--;
	 }

}

