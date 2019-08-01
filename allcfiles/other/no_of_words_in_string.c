#include<stdio.h>
main()
{
int i,cnt=0;
char s[100];
printf("enter a string");
gets(s);
for(i=0;s[i];i++)
{
if((s[i]==' ')&&(s[i+1]!=' ')&&(s[i+2]!=' ')&&(s[i+2]!='\0'))
{
cnt++;
}
}
printf("%d",cnt);
}
