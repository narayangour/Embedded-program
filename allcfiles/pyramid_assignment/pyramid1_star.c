/*****
****
***
**
*
**
***
****
******/
///////////////////////////
#include<stdio.h>
main()
{
        int n,i,j,k;
printf("enter no:");
scanf("%d",&n);
for(i=-n;i<=n;i++)
{ k=i;
if(k<0)
k=-k;
for(j=0;j<=n;j++)
{
(k+1<=j)?printf(" "):printf("* ");
}
printf("\n");
}
}
