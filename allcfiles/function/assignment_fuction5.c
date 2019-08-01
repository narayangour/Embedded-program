#include<stdio.h>
main()
{
int i=45,c;
c=check(i);
printf("\n %d\n",c);
}
check(int ch)
{
if (ch>=45)
return (100);
else
return (20*10);
}
