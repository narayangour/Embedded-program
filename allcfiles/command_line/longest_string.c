#include<stdio.h>
int main(int argc,char**argv)
{
	int i,j,cnt=0,cnt1=0,index;
	char *p;
	for(i=1;i<argc;i++)
	{	
		p=argv[i];
		cnt1=0;
		for(j=0;p[j];j++)
		{
			
			cnt1++;
		}
		if(cnt1>cnt)
		{
	cnt=cnt1;
	index=i;	
		}
	}
printf("logest string=%s at positon%d\n",argv[index],index);
}
