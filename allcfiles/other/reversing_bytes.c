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
		bit--;
	} 
	i=sizeof(int)*8-1;
	bit=sizeof(int)*8-1;
	j=0;
	while(i>j)
	{
		m=(data>>i)&1;
		n=(data>>j)&1;
			data^=(1<<i);
			data^=(1<<j);
		i--;
		j++;
	}
	printf("\n after reversing data=%d\n",data);
	bit=31;
	while(bit>=0)
	{
		printf("%d",(data)>>bit&1);
		bit--;
	} 
}
