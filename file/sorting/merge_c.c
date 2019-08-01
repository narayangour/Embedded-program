#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define E 10
void divide(int a[],int,int);
void merge(int a[],int,int);
main()
{
	unsigned int i,j,n,temp,a[E],b;

	srand(getpid());
	for(i=1;i<=E;i++)
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
	for(i=0;i<E;i++)
		printf(" %d\t",a[i]);
	divide(a,0,E-1);
	///////////////merge sort////////////t//////////////
		printf("after merge sorting\n");
	for(i=0;i<E;i++)
		printf(" %d\t",a[i]);
}
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
