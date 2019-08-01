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
//alarm(8);
main()
{
	struct rlimit v;
	v.rlim_cur=100;
	v.rlim_max=200;
	//alarm(10);
	setrlimit(RLIMIT_CPU,&v);
	if(getrlimit(RLIMIT_CPU,&v)==-1)
	{
		printf("error\n");
		//perror(getrlimit);
	}
	printf("cur:%u\n",(unsigned int)v.rlim_cur);
	printf("max:%u\n",(unsigned int)v.rlim_max);
	signal(2,f1);
	signal(3,f2);
	//f();
	printf("\n............................>\n");
	while(1);
	/*
	   v.rlim_cur*=10000000;
	   setrlimit(RLIMIT_STACK,&v);
	   if(getrlimit(RLIMIT_STACK,&v)==-1)
	   {
	   perror(getrlimit);
	   }
	   printf("cur:%u\n",(unsigned int)v.rlim_cur);
	   printf("max:%u\n",(unsigned int)v.rlim_max);

	   exit(0);
	 */	
}

