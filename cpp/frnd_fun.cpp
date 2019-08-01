#include<iostream>

using namespace std;
class square;
class crectangle 
{
	private:
		int width;
		int height;
	public:
	int area()
		{
		return (width*height);
		}
	void convert(square a);
};
class square
	{
	private:
		int side;
	public:
		void set_side(int a)
		{
		side=a;
		}
	friend class crectangle;
	};
void crectangle::convert(square a)
	{
	width=a.side;
	height=a.side;
	}
int main()
{

	crectangle rect;
	square sqr;
	sqr.set_side(4);
	rect.convert(sqr);
	cout<<rect.area();

}

