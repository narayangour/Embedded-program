#include<stdio.h>
void mystrcpy(char str1[200],char str2[100]);
main()
{
char str1[200],str2[100];
printf("enter 1st string");
gets(str1);
printf("enter 2nd string");
gets(str2);
mystrcpy(str1,str2);
printf("%s\n",str1);
}
void mystrcpy(char *p1,char *p2)
{
int i;
for(i=0;p2[i];i++)
p1[i]=p2[i];

p1[i]='\0';
}
