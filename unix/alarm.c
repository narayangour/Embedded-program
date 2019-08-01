#include<stdio.h>
#include<unistd.h>
main()
{
alarm(5);
alarm(2);
printf("executing %d\n",getpid());
while(1)
{
printf("executing %d\n",getpid());

}

}
