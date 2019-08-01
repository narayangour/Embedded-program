#include<stdio.h>
#include<sys/resource.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
static int i,j;
void f2()
{
	printf("in isr\n");
	if(j<2)
	{
	//	signal(3,f2);
		j++;
	}
	else
		signal(3,SIG_DFL);
}
void f1()
{
	printf("in isr\n");
	if(i<4)
	{
	//	signal(2,f1);
		i++;
	}
	else
		signal(2,SIG_DFL);
}
main()
{
int ret;
printf("*************\n");
//ret=fork();
printf("111111111\n");
if(fork())
{
signal(2,SIG_IGN);
printf("child exicuting %d\n",getpid());
while(1);
//exit(0);
}
else 
{
printf("parent is exicuting %d\n",getpid());
printf("333333333\n");
while(1);
//exit(0);
}

}
