#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sift(int a[],int i,int n)
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
