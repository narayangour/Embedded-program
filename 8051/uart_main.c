#include<reg51.h>
#include"uart.h"
main()
{
	 char i,j,k;
	init_uart();
//uart_tx('A');//case1 
while(1)
{
	uart_tx('A');
	j=uart_rx();
	j=j-48;
	for(i=7;i>=0;i--)
	{
//	(j&(1<<i))?uart_tx('1'):uart_tx('0');
k=(j&(1<<i))?1:0;
  	uart_tx(k);//case2
	}
//	uart_tx('A');	
	//while(1);
}
}
