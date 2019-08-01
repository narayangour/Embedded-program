#include<reg51.h>
#include"delays.h"
#define lcd_data P0

sbit rs=P2^0;
sbit rw=P2^1;
sbit en=P2^2;

void write_lcd(unsigned char dat)
{
	lcd_data=dat;
	rw=0;
	en=1;
	en=0;
	delay_ms(2);
}
void cmd_lcd(unsigned char cmd)
{
	rs=0;
	write_lcd(cmd);
}
void putc_lcd(unsigned char var)
{
	rs=1;	
	write_lcd(var);
}
void init_lcd()
{
cmd_lcd(0x02);
cmd_lcd(0x30);
cmd_lcd(0x06);
cmd_lcd(0x0c);
cmd_lcd(0x01);	
cmd_lcd(0x80);
delay_ms(10);

}
/*void puts2_lcd(char *s)
{
unsigned int i=0;
while(*s)
{0
if(i==16)
cmd_lcd(0xc0);
putc_lcd(*s++);
i++;
}
}
void puts_lcd(char *s)
{
while(*s)
putc_lcd(*s++);
}
void putui_lcd(unsigned int n)
{
	char a[5]={0},i=0;
	if(n==0){putc_lcd('0');}
else
	while(n)
	{
	a[i++]=(n%10)+48;
	n/=10;
	}
	for(--i;i>=0;i--)
	putc_lcd(a[i]);
}
void putsi_lcd(int n)
{
	if(n<0){putc_lcd('_');}
	putui_lcd(n);
}
void puthex_lcd(unsigned int n)
{
char a[4]={'0','0','0','0'},i=3,t;
	while(n)
	{
		t=(n%16);
		n/=16;
		if(t>9)
			t=(t-10)+'A';
		else 
			t=t+48;
		a[i--]=t;
	}
	for(i=0;i<4;i++)
	putc_lcd(a[i]);
}
void putbin_lcd(unsigned int n)
{
	char i;
	for(i=15;i>=0;i--)
	{
		(n&(1<<i))?putc_lcd('1'):putc_lcd('0');
	}
}
void build_cgram(char *p,unsigned char s)
{
	unsigned char i;
	cmd_lcd(0x40);
	for(i=0;i<s;i++)
	{
	putc_lcd(p[i]);
	}
	cmd_lcd(0x80);
}*/
/*float putf2_lcd(float f)
{
	unsigned char i;
	unsigned char j;	
i=f;
for(j=0;j<3;j++)
{
		
}	
*/

	



/*void putf_lcd(float f)
{
int i=f;
unsigned int j;
j=(f-i)*1000;
putui_lcd(i);
putc_lcd('.');
putui_lcd(j);

}*/
