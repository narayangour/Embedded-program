#include<stdio.h>
void  mymemset(char *p1,char ch,int n)
{
	int j;
	for(j=0;j<n;j++)
	{
		p1[j]=ch;
	}
}
void mymemset(char *p,char ch,int n);
main()
{
	char str[100],ch;
	int n,j;
	puts("enter string and position and how many charactor to be replaced");
	gets(str);
	scanf(" %c",&ch);
	scanf(" %d",&j);
	scanf(" %d",&n);
	mymemset(str+j,ch,n);
	printf("%s\n",str);
}
