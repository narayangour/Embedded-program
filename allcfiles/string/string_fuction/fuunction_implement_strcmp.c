#include<stdio.h>
int  mystrcmp(char* str1,char* str2);
main()
{
char str1[200],str2[200];
printf("enter two string");
gets(str1);
gets(str2);
mystrcmp(str1,str2);
if(mystrcmp(str1,str2)==0)
printf("strings are same\n");
else
printf("not same\n");
}
int mystrcmp(char *str1,char*str2)
{
while(*str1==*str2)
{
if(*str1=='\0')
return 0;
str1++;
str2++;
}
return (*str1-*str2);
}

