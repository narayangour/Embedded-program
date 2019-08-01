#include<stdio.h>
main()
{
	int data,bit;
	printf("enter data:");
	scanf("%d",&data);
	printf("before reversing data=%d\n",data);
	bit=31;
	while(bit>=0)
	{
		printf("%d",(data)>>bit&1);
		bit--;
	}
while((bit<8)&&(bit>=0))
{

		printf("%d",(data)>>bit&1);
bit--;
} 
}	
