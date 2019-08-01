#include<stdio.h>
main()
{
char str[100],i,j,n,ant=0,cnt=0,spcl=0;
printf("enter string");
scanf("%s",str);
for(i=0;str[i];i++)
{
if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
cnt++;
else if((str[i]>='0') && (str[i]<='9'))
ant++;
else
spcl++;
}
printf("no of charactor=%d\n no of numeric=%d\n no of special charactor=%d",cnt,ant,spcl);
}
