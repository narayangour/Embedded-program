#include<stdio.h>//calculate how many bits are set//
main()
{
	int data,bit=31,count=0;
	printf("enter a no");
	scanf("%d",&data);
test:
	if((data>>bit)&1)
	{
		count++;
		{
			if(bit>=0)
			{
				bit--;
goto test;
			}
		}
	}
	else if(bit>=0)
	{
		bit--;
		goto test;
	}
		printf("%d\n",count);

}
