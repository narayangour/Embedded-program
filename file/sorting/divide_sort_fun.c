#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void divide(int a[],int left,int right)
{
int mid;
	if(left!=right)
	{
		mid=(left+right)/2;
		divide(a,left,mid);
		divide(a,mid+1,right);
		merge(a,left,right);
	}
}

