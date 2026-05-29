#include<stdio.h>
void Nchange(int x);
void Nchange(int x)
{
	x=100;
}
int main()
{
	int x=10;
	printf("Before the calling:%d\n",x);
	Nchange(x);
	printf("After calling:%d\n",x);
	return 0;
}
