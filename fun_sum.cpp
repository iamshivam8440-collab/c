#include<iostream>
using namespace std;
int add(int a,int b);
int add(int a,int b)
{
	int sum=a+b;
	return sum;
}
int main()
{
	int x,y;
	int result;
	cout<<"Enter 2 number:";
	cin>>x>>y;
	result=add(x,y);
	cout<<"Sum is:"<<result;
	return 0;
}
