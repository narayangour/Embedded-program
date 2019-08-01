////////////assignment4/////////
#include<stdio.h>
////////#include<string.h>
main()
{
char s1[100],s2[100],s3[100],s4[100];
int i,cnt=0;
printf("enter 3 strings");
scanf("%s",s1);
scanf("%s",s2);
scanf("%s",s3);
strcpy(s4,s1);
strcpy(s4+strlen(s1)," ");
strcpy(s4+strlen(s1)+1,s2);
strcpy(s4+strlen(s1)+strlen(s2)," ");
strcpy(s4+strlen(s1)+strlen(s2)+1,s3);
printf("%s\n",s4);
}
