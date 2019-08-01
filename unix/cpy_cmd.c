#include"headers.c"
main(int argc,char **argv)
{
	int p[2],fd1,fd2,size;
	char *ptr=NULL;
	char ch;
	if(pipe(p)==-1)
		{
		perror("pipe");
		return;
		}
	if(fork())
	{
	{
	fd1=open(argv[1],O_RDONLY);
		size=lseek(fd1,0,2);
	lseek(fd1,0,0);
	write(p[1],&size,4);
	sleep(2);
	printf("size_+===%d\n",size);
	ptr=calloc(1,size+1);
	read(fd1,ptr,size);
	write(p[1],ptr,size);

	}
	
	}
	else
	{
	{
	 read(p[0],&size,4);
	fd2=open(argv[2],O_CREAT|O_WRONLY|O_TRUNC,0777);
	ptr=calloc(1,size+1);
	printf("size==%d\n",size);
	read(p[0],ptr,size);
	write(fd2,ptr,size);
	}
	}
}

