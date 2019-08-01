#include<iostream>
using namespace std;
int x=10;
void swapv(int a,int b)
{
int t;
t=a;
a=b;
b=t;
}
void swapa(int *p1,int *p2)
{
int t;
t=*p1;
*p1=*p2;
*p2=t;
}
void swapr(int &x,int &y)
{
int t;
t=x;
x=y;
y=t;
}
int main(int argc,char**argv)
{	
	int x=5;
	int *p=&x;
	int *&q=p;
	cout<<(*q);
/////////////////////////////////////////
	int v1,v2;
	//swaping program
	cout<<"enter value for swapping of v1 and v2\n";
	cin>>v1>>v2;
	cout<<"v1 is:"<<v1<<"v2 is :"<<v2;
	swapv(10,20);	
	cout<<"after swapv v1 is:"<<v1<<"v2 is :"<<v2;
	swapa(&v1,&v2);
	cout<<"after swapa v1 is:"<<v1<<"v2 is :"<<v2;
	swapr(v1,v2);
	cout<<"after swapr v1 is:"<<v1<<"v2 is :"<<v2;









///why redeclaration error....
/*	int &a=x;
	int &a=y;
	int &a=k;
*/
		
}
