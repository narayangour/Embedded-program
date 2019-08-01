#include<stdio.h>
#include<stdlib.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
//int de(int a,int b);
int mod(int a,int b);
main()
{ 
div_t c;
int a,b;
char ch;
printf("enter two integer");
scanf("%d %d",&a,&b);
printf("enter ur choice");
scanf(" %c",&ch);
if(ch=='+')
{
printf("%d",add(a,b));
}
else if(ch=='-')
{printf("%d",sub(a,b));}
else if(ch=='*')
{printf("%d",mul(a,b));}
else if(ch=='/')
{c=div(a,b);
printf(" %d\n %d\n",c.quot,c.rem);
}
else if(ch=='%')
{printf("%d",mod(a,b));}
else
{printf("give valid operation");}
}
int add(int a,int b){
return (a+b);}
int sub(int a,int b){
return (a-b);}
int mul(int a,int b){
return (a*b);}
int de00(int a,int b){
return (a/b);}
int mod(int a,int b){
return (a%b);}
