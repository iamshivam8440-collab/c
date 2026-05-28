#include<stdio.h>
void arm(int x);
void arm(int x)
{
	int s,a;
	int y=x;
	while(x!=0)
	{
	  a=x%10;
	  s=s+(a*a*a);
	  x=x/10;	
	}
	if(y==s)
	{
		printf("Number is armstrong:");
	}
	else
	{
		printf("Number is not armstrong:");
	}
}
int main()
{
	int x;
	printf("Enter your number:");
	scanf("%d",&x);
	arm(x);
	return 0;
}
