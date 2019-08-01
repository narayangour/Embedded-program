#include<stdio.h>
main()
{
	int n,i,j;
	printf("enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=5;j>=n;j--)
	{
			(i+n>=j)?printf("1"):printf("* ");
		}
		printf("\n");
	}
}
