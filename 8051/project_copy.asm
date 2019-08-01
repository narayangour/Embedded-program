#include"reg51.h"

void uart_tx(unsigned char  dat);
void putui_uart(unsigned int n);
void init_uart();
void delay3633();
void delay1675();

sbit ir=P3^3;


#define BOUD 9600
#define XTAL 11.0592
#define TEMP (XTAL/(12*32)/BOUD)
#define TEMP2 (TEMP*1000)*1000
#define LOAD_VAL (256-TEMP2)
main()
{
	char i;
	unsigned char address=0;
	unsigned char command=0;
//	TMOD=0x00;
while(1)
{
	address=0;
	command=0;
	while(ir);

	delay3633();
	//delay1675();

	for(i=4;i>=0;i--)
	{
	delay1675();
	if(!ir)
	address|=1<<i;
	}
	for(i=5;i>=0;i--)
	{
	delay1675();
	if(!ir)
	command|=1<<i;
	}

	init_uart();
	putui_uart(command);
	
//	delay3633();
//	delay1675();
}
	

/*
	init_uart();
while(1)
{
uart_tx(65);
}
*/
}
void putui_uart(unsigned int n)
{
	char a[5]={0},i=0;
	if(n==0){uart_tx('0');}
else
	while(n)
	{
	a[i++]=(n%10)+48;
	n/=10;
	}
	for(--i;i>=0;i--)
	uart_tx(a[i]);
}
void delay3633()
{
	TMOD|=0x00;
	TH0=0x96;
	TL0=0x1f;         ////3633...TH=9d...TL=0b
	TR0=1;
	while(TF0==0);
	TR0=0;
	TF0=0;
}
void delay1675()
{
	TMOD|=0x00;
	TH0=0xcf;
	TL0=0x0b;         ////1675...TH=CF...TL=18
	TR0=1;
	while(TF0==0);
	TR0=0;
	TF0=0;
}
void init_uart()
{
	SCON=0x50;
	TMOD=0x20;
	TH1=LOAD_VAL,TL1=LOAD_VAL;
	TR1=1;
}
void uart_tx(unsigned char  dat)
{
	SBUF=dat;
	while(!TI);
	TI=0;
}
