#include<stdio.h>//calculate how many bits are set//
main()
{
	int a,b,temp=1,result;
	printf("enter two int");
	scanf("%d %d",&a,&b);
	while(b>0)
	{
		result=result*a;
		printf("result=%d\n");
		b--;
	}
	printf("result=%d",result);
}

}
