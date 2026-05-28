#include<stdio.h>
void num();
void eqn();
void eqn()
{
	int x,y,z,R;
	x=2;
	y=3;
	z=3;
	R=1;
	int Solution=3*x/y-z+R;
	printf("Solution is:%d\n",Solution);
}
void num()
{
	int num;
	printf("Enter the number to check the is divisible by 97:");
	scanf("%d",&num);
	if(num%97==0)
	printf("Number is divisible by->97");
	else
	printf("Number is not divisible by->97");
	printf("\n");
}
int main()
{
	num();
	eqn();
	return 0;
}
