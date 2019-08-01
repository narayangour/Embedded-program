#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void heap(int a[],int n);
void soft(int a[],int i,int n);
main()
{
	unsigned int i,j,n,N=0,temp,a[10],b;

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
	{
		printf(" %d\t",a[i]);
		N++;//no of element
	}
	printf("*****\n %d\n*******",N);
	///////////////buuble sort////////////t//////////////
	heap(a,N);//NO OF NODE	
	printf("after heap sorting\n");
	for(i=0;i<10;i++)
		printf(" %d\t",a[i]);
}
void heap(int a[],int n)
{
	int i,j,temp;
	for(i=(n/2)-1;i>=0;i--)
	{
		soft(a,i,n);
	}
	for(i=n-1;i>0;i--)
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		soft(a,0,i);
	}
}
void soft(int a[],int i,int n)
{
	int child,temp;
	for(temp=a[i];((2*i)+1)<n;i=child)
	{
		child=2*i+1;
		if(( (child)!=n-1) && (a[child+1] > a[child] ))
		{
			child++;
		}
		if( a[child] > temp)
			a[i]=a[child];
		else 
			break;	
	}
	a[i]=temp;
}
