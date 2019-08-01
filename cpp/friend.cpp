#include<iostream>

using namespace std;
class node
{
	private:
		int data;
		int key;
	public:
	node()
	{
	cout<<"enter data";
	cin>>data;
	cout<<"enter key";
	cin>>key;
	}
	friend int sum();
	friend class binarytree;
};


class binarytree
{
	private:
		node *root;
	public:
	int find(int key);
};

int binarytree::find(int key)
{
	if(root->key==key)
	{
		return root->data;
	}
	else 
	{
	int x,y;
	node objb;
	x=objb.data;
	y=objb.key;
	return x+y;
	}
}
int sum()
{
node obj;
int x,y;
x=obj.data;
y=obj.key;
return x+y;
}
main()
{
binarytree obj;
int y;
y=obj.find(25);
int x=sum();
cout<<"output of binary tree class fun=""\n"<<y<<"output of node class"<<x;
}

