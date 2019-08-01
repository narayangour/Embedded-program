#include<iostream>

using namespace std;
class student
{

	private:
	
	int rollno;
	float marks;
	public:
	student()
	{
		rollno=0;
		marks=0.0;
	}
	student(int r,int m)
	{
		rollno=r;
		marks=m;	
	}
	student(student &t)
	{
		rollno=t.rollno;
		marks=t.marks;
	}
	void getdata()
	{
		cout<<"enter roll no and marks";
		cin>>rollno>>marks;
	}
	void showdata()
	{
		cout<<"roll no:"<<rollno<<"marks:"<<marks<<"\n";
	}
};
int main()
{
student st1;
student st1();

}

