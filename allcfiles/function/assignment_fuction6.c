#include<stdio.h>
/* main()
{
int i=45,c;
c=multiply(i*1000);
printf("\n %d",c);
}
multiply(int ch)
{
if(ch>=40000)
return(ch/10);
else
return 10;
}
*/
//*******************14*********************
/* main()
{
float area;
int radius=1;
area=circle(radius);
printf("\n %f",area);
}
circle(int r)
{
float a;
a=3.14*r*r;
return a;
}
*/
//********************15************************
/* main()
{
void slogan();
int c=5;
c=slogan();
printf("\n %d",c);
}
void slogan()
{
printf("\n only he");
}
*/
//******************16******************
/*main()
{
int i=5,j=2;
junk(&i,&j);
printf("\n %d %d \n",i,j);
}
junk(int*i,int *j )
{
*i=*i**i;
*j=*j**j;
} 
*/ 
//*******************17****************
void change(int *,int);
main()
{
int a[]={2,4,6,8,10};
int i;
change(a,5);
for(i=0;i<=4;i++)
printf("\n %d",a[i]);
}
void change (int *b,int n)
{
int i;
for(i=0;i<n;i++)
*(b+i)=*(b+i)+5;
}
