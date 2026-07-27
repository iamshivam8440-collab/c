#include<iostream>
using namespace std;
class unaryOp{
	int x;
	int y;
	public:
	void setData(int p,int q)
	{
		x=p;
		y=q;
	}
	unaryOp operator ++(int)  //++ function name
	{
		unaryOp h1;
		h1.x=x++;
		h1.y=y++;
		return h1;
	}
	void Display()
	{
		cout<<x<<" "<<y<<endl;
	}
};
int main()
{
	unaryOp e1,e2;
	e1.setData(4,5);
	e2=e1++;
	e1.Display();
	return 0;
}
