#include<stdio.h>
main()
{
char ch;
printf("enter a char");
scanf("%c",&ch);
{
if(ch>='A' && ch<='Z')
printf("%c\n",ch+32);

if(ch>='a' && ch<='z')

printf("%c\n",ch-32);
}
}
