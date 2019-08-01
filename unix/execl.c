#include<stdio.h>
#include<unistd.h>
main()
{
	printf(" %d....\n",getpid());
	if(execl("/home/v13he9n5/unix","./p2","./p1",NULL)==-1)
		{
		perror("execl\n");
		}
	printf("p1 exicuting:\n");

}
