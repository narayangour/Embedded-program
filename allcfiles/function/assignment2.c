#include<stdio.h>
main()
{
 int x=1,y=1,z=1,d;
/* if z=1 than ans always comes 1 whatever the value of x and y */
 d=x&&y||z;
 printf("d=%d\n",d);
}

