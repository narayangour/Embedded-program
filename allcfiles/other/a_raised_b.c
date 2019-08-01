#include<stdio.h>//calculate how many bits are set//
main()
{
	int n,r=1;
	printf("enter a no");
	scanf("%d",&n);

	while(n>0)
	{
		r=r*n;
		n--;
	}
	printf("factorial=%d\n",r);
}

