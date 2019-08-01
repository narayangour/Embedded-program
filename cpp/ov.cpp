#include<iostream>
 using namespace std;
class meter
{
private:
//	int val;
public:
	meter()
	{
		cout<<"enter vaue in (cms):";
//		cin>>val;
	}
	meter(int x)
	{
		float y;
		y=x/100.0;
		cout<<"output in (m):"<<y<<"\n";
	}
	operator int()
	{
	int x,y;
	cout<<"enter value in(cms):";
	cin>>x;
	y=x*100;
	cout<<"output in (m):"<<y<<"\n";
	return y;
	}
};
main()
{
int cms;
meter obj;
cin>>cms;
obj=cms;
cms=obj;

}
