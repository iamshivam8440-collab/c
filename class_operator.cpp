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
	void display()
	{
		cout<<x<<" "<<y;
	}
};
int main()
{
	example e1,e2;
	cout<<"Output of e1:";
	e1.setData(2,4);
	e1.display();
	cout<<endl<<"Output of e2:";
	e2.setData(5,7);
	e2.display();
	return 0;
}
