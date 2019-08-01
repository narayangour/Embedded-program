#include<stdio.h>
/*        * *e * * *
           * * * *
            * * *
             * *
              * 
             * *
            * * *
           * * * *
          * * * * *            */
main()
{
        int n,i,j,k;
printf("enter no:");
scanf("%d",&n);
for(i=-n;i<=n;i++)
{ k=i;
if(k<0)
k=-k;
//if(i==0)
//continue;
for(j=n;j>=0;j--)
{
(k<j)?printf(" "):printf("* ");
}
printf("\n");
}
}
