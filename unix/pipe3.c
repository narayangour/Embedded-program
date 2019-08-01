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
	close(0);
	dup(p[0]);
	close(p[1]);
	execlp("wc","wc","-c",NULL);
	}
	else
	{
	close(1);
	dup(p[1]);
	close(p[0]);
	execlp("ls","ls","-l",NULL);	
	}
}

