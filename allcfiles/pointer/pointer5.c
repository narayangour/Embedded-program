///binary equivalent of double/////
#include<stdio.h>
main()
{
double d;
long long int *ch=&d,c;
int i,j,n;
printf("enter no:");
scanf("%lf",&d);
n=sizeof(long long int);
printf("%d\n",n);
c=*(ch);
for(j=63;j>=0;j--)
printf("%d",(c>>j)&1);
printf("\n");
}
