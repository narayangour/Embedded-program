#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void divide(int a[],int n)
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
void merge(int a[],int left,int right)
{
	int l,l_max,r,r_max,mid,t,temp[E];
	mid=(left+right)/2;
	l=left,l_max=mid;
	r=(mid+1),r_max=right;
	t=left;
	while((l<=l_max) && (r<=r_max))
	{
		if(a[l] < a[r])
			temp[t++]=a[l++];
		else
			temp[t++]=a[r++];
	}
	while(l<=l_max)
		temp[t++]=a[l++];
	while(r<=r_max)
		temp[t++]=a[r++];
	while(left<=right)
	{
		a[left]=temp[left];
		left++;
	}
}
