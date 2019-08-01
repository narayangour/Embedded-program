#include<stdio.h>
main()
{
	int i,j,k,n;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>0;j--)
		{
			(i>=j)?printf("%d ",i):printf(" ");
		}
		printf("\n");
	}
}
