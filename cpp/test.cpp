#include<iostream>
using namespace std;
class maxn
{
	public:
	int a,b;
	maxn()
	{
	cout<<"enter a and b";
	cin>>a>>b;	
	}
	void swap(int &a,int &b);
};
void maxn::swap(int &a,int &b)
{
int t;
t=a;
a=b;
b=t;
}

main()
{
maxn obj;
obj.swap(obj.a,obj.b);
cout<<obj.a<<obj.b;
}
