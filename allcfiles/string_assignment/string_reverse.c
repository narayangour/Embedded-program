#include<stdio.h>
#include<string.h>
main()
{
int i;
char str[100];
puts("enter a string");
gets(str);
for(i=strlen(str)-1;i>=0;i--)
printf("%c",str[i]);
//printf("str:%s\n",str);
}
