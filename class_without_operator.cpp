#include<iostream>
using namespace std;
class Demo{
	int x;
	static int y;
	public:
	static void setData()
	{
	  y=100;	
	}
	static void display()
	{
		cout<<y;
	}
};
int Demo::y;//y=20
int main()
{
	Demo::setData();
	Demo::display();
	return 0;
}
