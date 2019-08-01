#include<stdio.h>
main()
{
char str[]="abcdefghijklmnopqrstuvxyz";
int *p,i;
p=str;
for(i=0;i<4;i++)
{
printf("%c\n",*p++);
}
}
