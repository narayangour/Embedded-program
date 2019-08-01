#include<iostream>

using namespace std;
class point 
{

	friend void changeprivate(point &);
	public:
	point(void):m_i()
//	point(void)
	{
//	m_i=0;
	}
	void printprivate(void)
	{
		cout<<"print private....="<<m_i<<endl;
	}
	private:
	int m_i;
};

void changeprivate(point &i)
{
	i.m_i++;
}
int main()
{
	point spoint;
	spoint.printprivate();
	changeprivate(spoint);
	spoint.printprivate();
}

