#include"headers.c"
main(int argc,char **argv)
{
	int fd,p[2];
	char ch,ch1;
	if(pipe(p)==-1)
	{
		perror("pipe");return;
	}
	printf("%c\n",argv[1][0]);
//	printf("%s",argv[1]);
//	if(argv[1]=='>')
	{
		fd=open(argv[2],O_CREAT|O_RDWR|O_TRUNC,0777);
		if(fd==-1)
		{	
			perror("open");
			return 1;
		}
		close(1);
		dup(p[1]);
		while(1)
		{	
			ch=getchar();
			if(ch=='q')
				break;
			
			write(p[1],&ch,1);
			read(p[0],&ch1,1);
			write(fd,&ch1,1);
		}
		close(p[0]);
		
	}
}
