///binary equivalent of double/////
#include<stdio.h>
main()
{
double d;
long int *ch=&d,c;
int i,j,n;
printf("enter no:");
scanf("%lf",&d);
n=sizeof(long int);
printf("%d",n);
for(i=1;i>=0;i--)
{
c=*(ch+i);
for(j=31;j>=0;j--)
printf("%d",(c>>j)&1);
}
printf("\n");
}
