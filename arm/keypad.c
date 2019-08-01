#include<lpc214x.h>
#define c0 (IOPIN0 & (1<<4))
#define c1 (IOPIN0 & (1<<5))
#define c2 (IOPIN0 & (1<<6))
#define c3 (IOPIN0 & (1<<7))
#define r0 (1<<8)
#define r1 (1<<9)
#define r2 (1<<10)
#define r3 (1<<11)
unsigned char keypad[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

unsigned char colscan()
{
	if((c0==0)||(c1==0)||(c2==0)||(c3==0))
		return 0;
	else
			return 1;
}
unsigned char keyscan()
{
unsigned char row,col;
IOCLR0=r0|r1|r2|r3;
IOSET0=(1<<4)|(1<<5)|(1<<6)|(1<<7);
while(colscan());
IOCLR0=r0;IOSET0=r1|r2|r3;
if(colscan())
{	row=0;goto colcheck;	
}	
IOCLR0=r1;IOSET0=r0|r2|r3;
if(colscan())
{row=1;goto colcheck;	
}	
IOCLR0=r2;IOSET0=r1|r0|r3;
if(colscan())
{row=2;goto colcheck;	
}
IOCLR0=r3;IOSET0=r1|r2|r0;
if(colscan())
{row=3;goto colcheck;	
}
colcheck:
{if(c0==0) col=0;else if(c1==0) col=1;else if(c2==0) col=2;else if(c3==0) col=3;
}
return keypad[row][col];
}

void delay_ms(unsigned int dly)
{
	unsigned int i;
	for(;dly>0;dly--)
	{
		for(i=12000;i>0;i--);
	}
}
