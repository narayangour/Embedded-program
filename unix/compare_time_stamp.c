#include"headers.c"
main(int argc,char **argv)
{
	struct utimbuf buf,buf2;
	if((utime(argv[1],&buf))==-1)
	{
		perror("utime");return;
	}
	printf("access time of 1st file: %d\n",buf.actime);
	printf("modification time  of 1=%d\n",buf.modtime);

	if((utime(argv[2],&buf2))==-1)
	{
		perror("utime");return;
	}
	printf("access time of 2st file: %d\n",buf.actime);
	printf("modification time  of 2=%d\n",buf.modtime);

//	if(v.st_atime=v1.st_atime)
//	printf("linked file\n");
//	else
//	printf("not linked file\n");
}
