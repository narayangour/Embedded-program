#include<stdio.h>
#include<string.h>
/*main1()

{ 
int n1,n2,n3,n4,n5;
char s1[100],s2[100], s3[100], s4[100], s5[100];
printf("enter 5 string");
scanf("%s %s %s %s %s",s1,s2,s3,s4,s5);
n1=strlen(s1);
n2=strlen(s2);
n3=strlen(s3);
n4=strlen(s4);
n5=strlen(s5);
if(n1>n2 && n1>n3 && n1>n4 && n1>n5)
printf("first is longest");
else if(n2>n1 && n2>n3 && n2>n4 && n2>n5)
printf("2 is longest");
else if(n3>n2 && n3>n1 && n3>n4 && n3>n5)
printf("3 is longest");
else if(n4>n2 && n4>n3 && n4>n2 && n4>n5)
printf("4 is longest");
else
printf("5 is longest");
} */
main()
{
char s[5][100];
int max=0,r,c,n[5],i,j,p;
r=sizeof(s)/sizeof(s[0]);
//printf("enter 5 string");
for(i=0;i<r;i++)
{
printf("enter string");
gets(s[i]);
n[i]=strlen(s[i]);
printf("\t%d\n",n[i]);
}
for(i=0;i<5;i++)
if(max<=n[i])
{
max=n[i];
p=i;
}
printf("longest string %d at %d",max,p);
}
//////////////////////////////////////////////

