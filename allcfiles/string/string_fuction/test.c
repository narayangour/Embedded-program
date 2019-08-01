#include<stdio.h>
void* mymemmove(void *p1,void *p2,int n);
main()
{
	char str[100];
	int i,j,n;
	puts("enter string and from possition to that possition and no of char");
	gets(str);
	scanf(" %d %d %d",&j,&i,&n);
	mymemmove(str+i-1,str+j-1,n);
	printf(" %s\n",str);
}
void * mymemmove(void *p1,void *p2,int n)
{ 
	char temp[200];
	int j,i;
	for(i=0;i<n;i++)
	{
		temp[i]=(*((char*)p2+i));
	}
	for(j=0;j<n;j++)
		(*((char*)p1+j))=temp[j];
	return p1;
}
