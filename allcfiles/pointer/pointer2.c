///binary equivalent of double using short int`/////
#include<stdio.h>
main()
{
double d;
short int *ch=&d,c;
int i,j;
printf("enter no:");
scanf("%lf",&d);
for(i=3;i>=0;i--)
{
c=*(ch+i);
for(j=15;j>=0;j--)
printf("%d",(c>>j)&1);
}
printf("\n");
}
