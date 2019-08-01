#include"headers.c"
main()
{
	int fd2,fd1;
	char rdbuf[20];
	char wrbuf[20];
fd1=open("fifo3",O_RDWR);	

fd2=open("fifo4",O_RDWR);	
while(1)
{
	read(fd1,&rdbuf,20);
	printf(" %s\n",rdbuf);
//	if(strcmp(rdbuf,quit)==0)
//		break;
	printf("enter string\n");
	gets(wrbuf);
	write(fd2,&wrbuf,20);
}
}
