#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int rows,column;
	cout<<"Enter the size of rows:";
	cin>>rows;
	cout<<"Enter the size of column:";
	cin>>column;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<column;j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
	return 0;
}
