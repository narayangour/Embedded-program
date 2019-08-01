#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void merge(int a[],int left,int right)
{
	int l,l_max,r,r_max,mid,t,temp[right];
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
