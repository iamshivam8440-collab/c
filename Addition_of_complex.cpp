#include<iostream>
using namespace std;
class complex{
	int x;
	int y;
	public:
	void setData(int p,int q)
	{
		x=p;
		y=q;
	}
	complex add(complex g1)
	{
		complex h1;
		h1.x=x+g1.x;
		h1.y=y+g1.y;
		return h1;	
	}
	void Display()
	{
		cout<<"Addition of complex number:"<<x<<"+"<<y<<"i";
	}
};
int main()
{
	complex c1,c2,c3;
	int x1,x2,y1,y2;
	cout<<"Enter the value of x1,y1,x2,y2:"<<endl;
	cin>>x1>>y1>>x2>>y2;
	cout<<"1st complex number is:"<<x1<<"+"<<y1<<"i"<<endl;
	cout<<"2nd complex number is:"<<x2<<"+"<<y2<<"i"<<endl;
	c1.setData(x1,y1);
	c2.setData(x2,y2);
	c3=c1.add(c2);
	c3.Display();
	return 0;
}
