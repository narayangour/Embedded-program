///binary equivalent of double/////
#include<stdio.h>
main()
{
double d;
int *ch=&d,c;
int i,j;
printf("enter no:");
scanf("%lf",&d);
for(i=1;i>=0;i--)
{
c=*(ch+i);
for(j=31;j>=0;j--)
printf("%d",(c>>j)&1);
}
printf("\n");
}
