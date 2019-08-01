////////////assignment5/////////
#include<stdio.h>
#include<string.h>
main()
{
char str[100],s1[300],s2[100],temp[100]={0};
int i,j;
printf("enter string and possition");
gets(s1);
gets(s2);
scanf("%d",&j);        

strcpy(temp,s1+j);
strcpy(s1+j,s2);
strcpy(s1+strlen(s2)+j,temp);
              
printf("%s\n",s1);
}
