#include"headers.c"
main(int argc,char **argv)
{
	struct stat v,v1,v2,v3;
	if((stat(argv[1],&v))==-1)
	{
		perror("stat");return;
	}
	printf("size 1st file: %d\n",v.st_size);
	printf("inode no of 1=%u\n",v.st_ino);
	if((stat(argv[2],&v1))==-1)
	{
		perror("stat");return;
	}
	printf("size 2nd file: %d\n",v1.st_size);
	printf("inode no of 2=%u\n",v1.st_ino);

	if(v.st_ino==v1.st_ino)
	{
	printf("linked file\n");
	}
	else
	printf("not linked file\n");
}
