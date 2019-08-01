///binary equivalent of double through char/////
#include<stdio.h>
main()
{
double d;
char *ch=&d,c;
int i,j;
printf("enter no:");
scanf("%lf",&d);
for(i=7;i>=0;i--)
{
c=*(ch+i);
for(j=7;j>=0;j--)
printf("%d",(c>>j)&1);
}
printf("\n");
}
