#include<iostream>
using namespace std;
class example{
	int x;
	int y;
	public:
	void setData(int p,int q)
	{
		x=p;
		y=q;
	}
	example ex()
	{
		example h1;
		h1.x=2;
		h1.y=3;
		return h1;
	}
	void Display()
	{
		cout<<x<<" "<<y<<endl;
	}
};
int main()
{
	example e1;
	e1.setData(2,3);
	e2.Display();
	return 0;
}
