#include<iostream>

using namespace std;
/*
inline int sum(int x,int y,int z)
{
	int i;
	for(i=500;i>0;i--)
	{
	cout<<i<<endl;
	}
	return x+y+z;
}

inline int sum(int x,int y)
{
	return x+y;
}

inline float sum(float x,float y)
{
	return x+y;
}*/
//	int sum(int,int=5);
//	float sum(float,float=5.1);
//	int sum(int x,int y,int z);
main()
{
	int z, x,y,z1,z4;
	float z2,p;
	float z3=25.3;
	cin>>x>>y>>z;
	 int sum(int,int,int);
	int sum(int,int=5);
	float sum(float,float=5.1);
	
	z1=sum(x,y,z);
	z4=sum(y);
	z2=sum(z3);
	
//	cout<<z3<<"\n";
	cout<<z4<<"\n";
	cout<<"all int"<<z1<<"\n";
	cout<<"2 int "<<z2<<"\n";
}

int sum(int x,int y,int z)
{
	int i;
	for(i=500;i>0;i--)
	{
	cout<<i<<endl;
	}
	return x+y+z;
}

int sum(int x,int y)
{
	return x+y;
}

float sum(float x,float y)
{
	return x+y;
}
