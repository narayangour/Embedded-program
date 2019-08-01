#include"headers.c"
main()
{
	int fd1,fd2;
	char rdbuf[20]={0};
	int p[2];

	if(pipe(p)==-1)
	{
		perror("pipe");
		return;
	}
	if(fork())
	{
	printf("in parent\n");
	read(p[0],rdbuf,20);
	printf("rdbuf: %s ",rdbuf);
	printf("parent exiting\n");
	}
	else
	{
	
//	sleep(5);
	printf("in child \n");
	write(p[1],"fsdf ",5);
	}

	

}

