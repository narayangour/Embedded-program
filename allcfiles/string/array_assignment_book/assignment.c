#include<stdio.h>
#include<string.h>
//////////////////////////////////

main1()
{
int sub[50],i;
for(i=0;i<=48;i++);
{
sub[i]=i;
printf("\n %d",sub[i]);
}
}
////////////////2///////////////
main2()
{
char c[2]="A";
printf("\n %c",c[0]);
printf("\n %s",c);
}
////////////////3///////////////
main3()
{
int a[5]={5,1,15,20,25};
int i,j,k=1,m;
i=++a[1];
j=a[1]++;
m=a[i++];
printf("\n %d %d %d\n",i,j,m);
}
/////////////4//////////////////
main4()
{
static char names[5][20]={"pascal","ada","cobol","fortran","perl"};
int i;
char *t;
t=names[3];
//names[3]=names[4];
//names[4]=t;
for(i=0;i<=4;names[i]);
printf("%s",names[i]);
}
//////////////////5//////////////////
main5()
{
int i,n;
char *x="vector";
n=strlen(x);
*x=x[n];
for (i=0;i<n;++i)
{
printf("%s \n",x);
x++;
}
}
/////////////////10////////////////////
main6()
{
char *str1="abcd";
char str2[]="abcd";
char str3[10]="vector";
printf("%d %d %d %d",sizeof(str1),sizeof(str2),sizeof("abcd"),sizeof(str3));
}
/////////////////11//////////////
main7()
{
char s1[20]="hello world";
s1[5]='\0';
printf("%d",strlen(s1));
}
///////////////12////////////////
main121212121212121212121212()
{
int i,a[20];
for(i=0;i<20;i++)
{
a[i]=i;
}
a[20]=100;
for(i=0;i<20;i++)
{
a[i]=a[20-i];
}
for(i=0;i<20;i++)
printf("%d\n",a[i]);
}
/////////////////13/////////////////
main13()
{
int a[10]={1,2,3,4,5,6,7,8,9,10},i,x=10,temp;
for(i=0;i<x;i++)
{
temp=a[i];
a[i]=a[x-i-1];
a[x-i-1]=temp;
}
for(i=0;i<x;i++)
printf("%d \n",a[i]);
}
////////////////////////23//////////////////////
main23()
{
char str[]="geneius";
print(str);
}
print(char *s)
{
if(*s)
print(++s);
printf("%c\n",*s);
}
///////////////////////////////////////
