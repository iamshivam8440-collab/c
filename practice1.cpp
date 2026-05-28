#include<stdio.h>
void fun();
void Fun();
void cell();
void simple_intrest();
void simple_intrest()
{
	float principal,rate ,time,SI;
	printf("Enter the principal in rupees:");
	scanf("%d",&principal);
	printf("Enter the rate in percent:");
	scanf("%d",&rate);
	printf("Enter the time in year:");
	scanf("%d",&time);
	SI=(principal*rate*time)/100;
	printf("Simple intrest is:%.2f\n",SI);
}
void cell()
{
	float celcius,farenheit;
	printf("Enter the temperatuen in celcius:");
	scanf("%f",&celcius);
	farenheit=(celcius*9/5)+32;
	printf("Temperature in farenheit is:%.2f\n",farenheit);
}
void Fun()
{
	float r,PI,area;
	float volume ,hight;
	PI=3.14;
	printf("Enter the radius of the circle:");
	scanf("%f",&r);
	area=PI*r*r;
	printf("Area of the circle:%.2f\n",area);
	printf("Enter the hight of the cylinder:");
	scanf("%f",&hight);
	volume=PI*r*r*hight;
	printf("Volume of the cylinder:%.2f\n",volume);
}
void fun()
{
	int length,breath ,area;
	printf("Enter the length of the rectangle:");
	scanf("%d",&length);
	printf("Enter the breath of the rectangle:");
	scanf("%d",&breath);
	area=length*breath;
	printf("Area of the rectangle:%d\n",area);
	
}
int main()
{
	fun();
	Fun();
	cell();
	simple_intrest();
	return 0;
}
