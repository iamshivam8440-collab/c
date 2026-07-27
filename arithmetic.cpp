#include<iostream>
using namespace std;
int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
int add(int x,int y)
{
  int sum=x+y;	
  return sum;	
}
int sub(int x,int y)
{
  int Sub=x-y;
  return Sub;	
}
int mul(int x,int y)
{
  int muL=x*y;
  return muL;	
}
int div(int x,int y)
{
	if(y==0)
	{
		return -1;
	}
	else
	{
		return x/y;
	}
}
int main()
{ 
    int a,b;
    int result;
    cout<<"Enter the 1st number:";
    cin>>a;
    cout<<"Enter the 2nd number:";
    cin>>b;
    cout<<"Addition is:"<<add(a,b)<<endl;
    cout<<"Subtraction is:"<<sub(a,b)<<endl;
    cout<<"Multiplication is:"<<mul(a,b)<<endl;
    result=div(a,b);
    if(result==-1)
    {
    	cout<<"Division is not perform:"<<endl;
	}
	else
	{
		cout<<"Division is:"<<result;
	}
	return 0;
}
