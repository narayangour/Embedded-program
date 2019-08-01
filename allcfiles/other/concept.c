#include<stdio.h>
main()
{
unsigned int a,b,c,d;
printf("enter no");
scanf("%u%u%u%u",&a,&b,&c,&d);
c=(a*b)-((a+(b/d))+(d*a))-b;
printf("%d\n",c);
}

