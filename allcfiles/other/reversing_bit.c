#include<stdio.h>
main()
{
	int data,bit,m,n,i,j;
	printf("enter data:");
	scanf("%d",&data);
	printf("before reversing data=%d\n",data);
	bit=31;
	while(bit>=0)
	{
		printf("%d",(data)>>bit&1);
		if(bit%8==0)
		putchar(' ');
		bit--;
	} 
	bit=sizeof(int)*8-1;
	j=7;
m=0;
	while(bit>=0)
	{
		i=7;
		while(i>=0)
		{
			if(((data>>j)&1)==1)
			{
				m=m|(1<<bit);
			}
			else
			{
				m=m&(~(1<<bit));
			}
			i--;
			bit--;
			j--;
		}
		j=j+16;
	}
putchar('\n');
bit=31;
	while(bit>=0)
	{
		printf("%d",m>>bit&1);
		if(bit%8==0)
		putchar(' ');
		bit--;
	} 


putchar('\n');

}


