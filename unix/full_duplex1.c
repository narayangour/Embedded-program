#include"headers.c"
main()
{
	mkfifo("/tmp/fifo7",0777);
	perror("mkfifo");
	mkfifo("/tmp/fifo8",0777);
	perror("mkfifo");
	int fd2,fd1;
	char rdbuf[20];
	char wrbuf[20];
	fd1=open("/tmp/fifo7",O_RDWR);	

	fd2=open("/tmp/fifo8",O_RDWR);	
	if(fork())
	{
		while(1)
		{
			read(fd2,rdbuf,20);
		//	printf("%s\n",rdbuf);
			if(strcmp(rdbuf,"quit")==0)
				break;
		puts(rdbuf);
		}
	}
	else
	{	
		while(1)
		{
			printf("ENter string \n");
			gets(wrbuf);
			write(fd1,wrbuf,20);
		}
	}
}
