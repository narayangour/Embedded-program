#include<stdio.h>
main()
{
double d;
int i,bit ,v;
char *ip=&d;

printf("enter real data");
scanf("%lf",&d);
v=*ip;
for(bit=31;bit>=0;bit--,printf(""))
{
printf("%d",(v>>bit)&1);
}
}
