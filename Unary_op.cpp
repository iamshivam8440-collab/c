#include<iostream>
using namespace std;
class unaryop{
	int x;
	int y;
	public:
	void setData(int p,int q)
	{
		p=x;
		q=y;
	}
	unaryop operator ++()
	{
		unaryop h1;
		h1.x=++x;
		h1.y=++y;
		return h1;
	}
	void Display()
	{
		cout<<x<<" "<<y;
	}
};
int main()
{
	unaryop a1,a2;
	a1.setData(2,9);
	a2=++a1;  //a2=a1.++();
	a2.Display();
	return 0;
}
