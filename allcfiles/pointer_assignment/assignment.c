#include<stdio.h>
/////////////////////1//////////////////
main1()
{
char s[]={'a','b','c','\n','c','\0'};
char *p,*str,*str1;
int i;
p=&s[3];
str=p;
str1=s;
printf("%d\n",i=(++*p + ++*str1-32));
printf("%d\n",i);
}
/////////////////2//////////////////////
main31()
{
char str[]="abcdefghijklmnopqrstuvwxyz";
int *p,i;
p=str;
for(i=0;i<4;i++)
{
printf("%c\n",(*p));
p++;
}
}
//////////////////3///////////////
main3()
{
int a[10] ;
printf("%u %u\n",a+1,&a+1);

}
///////////////////////4
main4()
{
int a[5]={5,1,15,20,25};
int i,j,k=1,m;
i=++a[1];
j=a[1]++;
m=a[i++];
printf("\n %d %d %d\n",i,j,m);

}
////////////////////////6
main6()
{
char s[]="hello";
int i=0;
while(s[i]!='\0')
{
printf("\n %c %c",s[i],*(i+s));
i++;
}
}
///////////////////////////7
main7()
{
int n[2][2]={{1,2},{4,5}};
int i,j;
for(i=0;i<2;i++)
for(j=0;j<2;j++)
printf("%d\n",*(*(n+i)+j));
}
///////////////////////8/
main8()
{
int arr[]={0,1,2,3,4};
int *ptr;
for(ptr=arr+4;ptr>=arr;ptr--)
printf("%d",arr[ptr-arr]);
}
///////////////////////9//////////
main9()
{
char a[]="sun";
char *p="emmanuel";
//a="emmamuel";
p="sun";
printf("\n %s %s",a,p);
return 0;
}
/////////////////////10
main()
{
int arr[]={12,13,14,15,16};
printf("\n %d %d %d",sizeof(arr),sizeof(*arr),sizeof(arr[0]));
}
