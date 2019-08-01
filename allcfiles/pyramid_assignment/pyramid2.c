#include<stdio.h>
main()
{
int i=8,total=0;
for(i=1;i<=10;i++)
{
switch(i)
{
case 1:
case 4:
case 5:
case 7:
total+=i;
break;
default:
continue;
}
printf("%d",i);
}
printf("\ntotal=%d\n",total);
return 0;
}
