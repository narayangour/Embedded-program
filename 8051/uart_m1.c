#include<reg51.h>
	#define BOUD 9600
	#define XTAL 11.0592
	#define TEMP (XTAL/(12*32)/BOUD)
	#define TEMP2 (TEMP*1000)*1000
	#define LOAD_VAL (256-TEMP2)

void init_uart()
{
	SCON=0x50;
	TMOD=0x20;
	TH1=LOAD_VAL,TL1=LOAD_VAL;
	PCON|=0x80;
	TR1=1;
}
void uart_tx(unsigned char  dat)
{
	SBUF=dat;
	while(!TI);
	TI=0;
}
unsigned char uart_rx()
{
	while(!RI);
	RI=0;
	return SBUF;
}











