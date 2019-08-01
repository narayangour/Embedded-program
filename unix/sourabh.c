#include"headers.c"
main()
{
	int fd1,fd2;
	char rdbuf[20]={0};
	char s[100];
	int p[2];

	if(pipe(p)==-1)
	{
		perror("pipe");
		return;
	}
	if(fork())
	{
	gets(s);
	write(p[1],s,)
	}
	else
	{
	close(1);
	dup(p[1]);
	close(p[0]);
	execlp("ls","ls","-l",NULL);	
	}
}

