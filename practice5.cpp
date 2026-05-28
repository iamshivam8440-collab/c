#include<stdio.h>
#define g 9.8
void avg();
void temp();
void force();
void fibonacci(int n);
int sum(int n);
void pattern();
void pattern()
{
	int i,j;
	for(i=0;i<25;i++)
	{
		for(j=0;j<(2*i-1);j++)
		{
			printf("*");	
		}
		printf("\n");
	}
}
int sum(int n)
{
	if(n==0)
	return 1;
	else
	return n+sum(n-1);
}
void fibonacci(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return fibonacci(n-1)+fibonacci(n-2);
}
void pro();
void pro()
{
	int a=10;
	printf("%d %d %d",a,++a,a++);
}
void force()
{
	//f=ma;
	float Force,mass,gravity;
	printf("Enter the mass of the object:");
	scanf("%f",&mass);
	Force=mass*g;
	printf("Force of the mass is:%.2f\n",Force);
}
void temp()
{
	float celcius,farenhite;
	printf("Enter the temperature in celcius to change into farenhite:");
	scanf("%f",&celcius);
	farenhite=(celcius*9/5)+32;
	printf("Temperature in farenhite:%.2f\n",farenhite);
}
void avg()
{
	int a,b,c;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Enter the three number:");
	scanf("%d",&c);
	float d=float(a+b+c)/3;
	printf("Average of three number is:%.2f\n",d);
}
int main()
{
	avg();
	temp();
	force();
	pro(); 
	int n=5;
	sum(n);
	printf("\n%d\n",n);
    int n;
	printf("Enter the size of n:");
	scanf("%d",&n);
	pattern(); 
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d",fibonacci(i));
	}
	return 0;
}
