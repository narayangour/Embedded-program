#include<stdio.h>
#include<string.h>
void mystrrev(char*str);
main()
{
char  str[200];
printf("enter string");
gets(str);
mystrrev(str);
printf("reverse of string is %s\n",str);
}
void mystrrev(char * str1)
{ 
int len,i;
char temp;
for(i=0,len=strlen(str1)-1;len>i;len--,i++)
{
temp=str1[i];
str1[i]=str1[len];
str1[len]=temp;
}
}
