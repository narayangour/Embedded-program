#include<stdio.h>
#include<string.h>
void vstrchr(char *str,char ch)
main()
{
char *p,ch,str[100];
printf("enter string");
gets(str);
printf("enter a charactor");
getchar(ch);
*p=strchr(str,ch);
printf("%c\n",p);
}
void vstrchr(char str,char ch)
{
int i;
char *p;
for(i=0;p[i];i++)
if(p[i]==ch)
return p;
}
}
