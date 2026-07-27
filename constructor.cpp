#include<iostream>
using namespace std;
class Demo{
	int x;
	int y;
	public:
	Demo(int p,int q)
	{
		cout<<"Constructor"<<endl;//call karna nahi padta hai
		x=p;
		y=q;
		cout<<x<<y;
	}
};
int  main()
{
//	Demo d1,d2,d3;//class ka object banate hi constructor chalta hai.
	Demo d1(1,2);
	return 0;
}
