#include<iostream>
using namespace std;
template<class T>
T max(T c,T d)
{
T result;
result=(c>d)?c:d;
return result; 
}
main()
{
int result;
//max obj;
cout<<"hello""\n";
int x=25,y=12;
result=max(x,y);
cout<<result;
}
