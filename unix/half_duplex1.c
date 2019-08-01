#include"headers.c"
main()
{
	int fd2,fd1;
	char rdbuf[20];
	char wrbuf[20];
fd1=open("fifo3",O_RDWR);	

fd2=open("fifo4",O_RDWR);	
while(1)
{	printf("ENter string \n");
	gets(rdbuf);
	write(fd1,&rdbuf,20);
	//sleep(2);
//	printf("%s\n",rdbuf);
//	if(strcmp(rdbuf,quit)==0)
//		break;
	read(fd2,&wrbuf,20);
	printf(" %s\n",wrbuf);
}
}
