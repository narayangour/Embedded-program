#include<stdio.h>
main()
{
int i,mark[5],max=0,index=0;
for(i=0;i<5;i++)
{
printf("enter marks");
scanf("%d",&mark[i]);
}
max=mark[0];
for(i=1;i<5;i++)
{
if(mark[i]>max)
{
max=mark[i];
index=i;
}
}
printf("%d %d\n ",max,index);
}

