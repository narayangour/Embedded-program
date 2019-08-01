#include<iostream>
 using namespace std;
class radian
{
private:
	float rad;
public:
	radian()
	{
	cout<<"enter val in rad:";
	cin>>rad;
	}

};
class degree
{
private:
	float deg;
public:	
	degree()
	{
	cout<<"enter val in deg:";
	cin>>deg;
	}
	operator float()
	{
	float val;
	val=deg*(3.14/180);
	cout<<"output is :"<<val;
	return val;

	}
};
main()
{
radian robj;
degree dobj;
robj=dobj;

}
