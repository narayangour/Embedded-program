#include<stdio.h>
char * mystrchr(char *str,char ch);
main()
{
char *p,str[100],ch;

printf("enter string");
gets(str);
printf("charactor");
scanf("%c",&ch);
p=mystrchr(str,ch);
if(p)
printf("%d\n",p-str);
else
printf("not found\n");
}
char * mystrchr(char *p,char ch)
{
int i;
char *q=NULL;
for(i=0;p[i];i++)
if(p[i]==ch)
break;
q=&p[i];
return q;
}
