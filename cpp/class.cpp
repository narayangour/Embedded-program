#include<iostream>
using namespace std;
/*void getst()
{
cout<<"msg from outside function"<<endl;
}

void student::getst()
{
	cout<<"enter rollno:"<<endl<<"enter name"<<endl<<"subject marks of 1 2 3"<<endl;
	cin>>rollno>>name>>sm1>>sm2>>sm3;
}
void student::showst()
{
	cout<<"rollno is:  "<<rollno<<endl<<"name is:  "<<name<<endl<<"subject marks of 1 2 3:  "<<endl<<sm1<<" "<<sm2<<" "<<sm3<<endl;
}*/
void getst();
class student
{
	int rollno;
	char name[20];
	float sm1;
	float sm2;
	float sm3;
//public:void getst();
//void showst();
public:void getst()
	{
cout<<"enter rollno:"<<endl<<"enter name"<<endl<<"subject marks of 1 2 3"<<endl;
cin>>rollno>>name>>sm1>>sm2>>sm3;
	}
	void showst()
	{
cout<<"rollno is:  "<<rollno<<endl<<"name is:  "<<name<<endl<<"subject marks of 1 2 3:  "<<endl<<sm1<<" "<<sm2<<" "<<sm3<<endl;
	}
	
};
/*
void getst()
{
cout<<"msg from outside function"<<endl;
}

void student::getst()
{
	cout<<"enter rollno:"<<endl<<"enter name"<<endl<<"subject marks of 1 2 3"<<endl;
	cin>>rollno>>name>>sm1>>sm2>>sm3;
}
void student::showst()
{
	cout<<"rollno is:  "<<rollno<<endl<<"name is:  "<<name<<endl<<"subject marks of 1 2 3:  "<<endl<<sm1<<" "<<sm2<<" "<<sm3<<endl;
}*/

int main()
{
cout<<"this msg from main"<<endl;
//student rec;
//rec.getst();
//rec.showst();
//void getst();

getst();

}
void getst()
{
student rec;
rec.getst();
rec.showst();
}

