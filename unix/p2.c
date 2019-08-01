#include<stdio.h>
main()
{
printf("p2:%d %d\n",getpid(),getppid());
sleep(5);
printf("p2 exicuting\n");
while(1);
}
