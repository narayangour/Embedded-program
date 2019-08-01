////////////assignment2/////////
#include<stdio.h>
main()
{
char str[100],ch;int i,cnt=0;
printf("enter string");
scanf(" %s",str);
//gets(str);
printf("charactor");
scanf(" %c",&ch);
for(i=0;str[i];i++)
{
if((str[i]==ch)||(str[i]==(ch+32)))
cnt++;}
printf("no of occurence=%d\n",cnt);
}

