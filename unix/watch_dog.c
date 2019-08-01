#include"headers.c"
int ret;
void killch(int i)
{
	printf("child is dead\n");
	kill(ret,SIGKILL);
//	wait(0);
exit(0);
}
void releasech(int i)
{
	signal(SIGALRM,SIG_IGN);
	printf("child is saved\n");
//	wait(0);
exit(0);
}
main()
{
	int a;
	
	if(ret=fork())
	{
		
		alarm(5);
		signal(SIGALRM,killch);
		signal(SIGCHLD,releasech);
		printf("parent is executing\n");
	wait(&a);	
	//	sleep(10);
	}
	else
	{
		printf("child is executing\n");
	srand(getpid());
		a=rand()%11;
		printf("time:=%d\n",a);
		sleep(a);
		exit(0);
	}
}
