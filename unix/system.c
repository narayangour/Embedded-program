#include<stdio.h>
main()
{
printf("in p1 %d...%d.\n",getpid(),getppid());
system("./p2\n");
printf("p1 exicuting\n");
}
