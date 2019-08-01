#include<stdio.h>
int zap(int n)
{
	if(n<=1)return 1;
	else return(zap(n-3)+zap(n-1));
}
main()
{
	printf("%d\n",zap(6));
}
