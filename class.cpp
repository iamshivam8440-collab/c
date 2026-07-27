#include<iostream>
using namespace std;
class car{
	int tyre;
	int steering;
	int brake;
	public:
	void fitTyre()
	{
		tyre=55;
		cout<<"Tyre fit successfully:"<<tyre;
	}
	void setBrake()
	{
		cout<<"Brake set successfully:";
	}
};
int main()
{
	car c1;
	c1.setBrake();
	c1.fitTyre();
	return 0;
}

