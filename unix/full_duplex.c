#include"headers.c"
main()
{
	int fd2,fd1;
	char rdbuf[20];
	char wrbuf[20];
	fd1=open("/tmp/fifo3",O_RDWR);	

	fd2=open("/tmp/fifo4",O_RDWR);	
	if(fork())
	{
		while(1)
		{
		printf("enter string\n");
		gets(wrbuf);
		write(fd2,wrbuf,20);
		}
	}
	else
	{
	while(1)
	{
	read(fd1,rdbuf,20);
//	printf(" %s\n",rdbuf);
	if(strcmp(rdbuf,"quit")==0)
		break;
	printf(" %s\n",rdbuf);
	}
	}
}
