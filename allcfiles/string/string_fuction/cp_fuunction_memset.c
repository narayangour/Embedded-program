#include<stdio.h>
void * mymemset(void *p1,int ch,int n)
{
	int j;
	for(j=0;j<n;j++)
	{
		*((char *)p1+j)=ch;
	
	}
	return p1;
}
main()
{
	char str[100],ch;
	int a[]={1,2,3,98,99,632};
	int n,j,i;
	puts("enter string and position and how many charactor to be replaced");
	gets(str);
//	scanf(" %c",&ch);
//	scanf(" %d",&j);
//	scanf(" %d",&n);
//	memset(a,'*',3);
	
//	printf("through standard memset %s\n",str);

	mymemset(a,'A',3);
	for(i=0;i<=5;i++)
	printf("%d\n",a[i]);
}
