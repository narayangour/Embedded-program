#include<stdio.h>
main()
{
int a=10,b=20,c=30,d=40,e;
e=a^=b^=a^=b^=c^=b^=c^=d^=c^=d;
printf("%d %d %d %d %d\n",a,b,c,d,e);
}

