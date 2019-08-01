#include<iostream>
using namespace std;
int x=10;
int x=50;
int main(int argc,char**argv)
{
	int x=20;
	x=30;
		{
		int x=40;
			{
			int x=60;
			cout<<x<<::x<<(x)<<::x;
			}
		}	
}
