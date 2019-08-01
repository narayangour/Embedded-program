#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
unsigned int i,j,n,temp,a[10000],b;
		
srand(getpid());
	for(i=1;i<=10;i++)
	{
		n=(rand()%10+10);
		for(j=0;j<i;j++)
		{	

			if(a[j]==n)
			{
				i--;break;
			}
		}
		if(j==i)
		{
			a[i-1]=n;
		}
	}
	printf("before sorting\n");
	for(i=0;i<10;i++)
		printf(" %d\t",a[i]);
///////////////buuble sort////////////t//////////////

	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
		
	printf("after bubble sorting\n");
	for(i=0;i<10;i++)
		printf(" %d\t",a[i]);
}
