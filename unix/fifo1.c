#include"headers.c"
main()
{
	int fd1;
	char rdbuf[20];
fd=open(fifo)	
	if(fork())
	{
		int j;
	do	
	  {
		read(p[0],&j,4);
		printf("j=%d\n",j);
		
			
		
		}while(j!=10);
		
	}
	else
	{
		int i=0;
		while(i<=10)
		{
			write(p[1],&i,4);
			sleep(1);
			i++;
		}
	}
}

