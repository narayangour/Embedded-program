#include"reg51.h"
#include"seg.h"
#include"delays.h"

sbit sw1=P2^4;
sbit sw2=P2^5;

void dispi_2_mux_segs(unsigned int n,int t);
main()
{
	unsigned char i;
	char j;
	while(sw2)
	{
		dispi_2_mux_segs(i,0);
		if(sw1==0)
		{
			i++;
			if(i==60)
			i=0;
			while(sw1==0)
			dispi_2_mux_segs(i,0);
		}
	}		
	while(i>=0)
	{
	for(j=250;j>0;j--);
	dispi_2_mux_segs(i,0);
	i--;
	}
	while(1);
}
