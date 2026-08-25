#include<stdio.h>
int fibo(int );
int fact(int );
int power(int ,int );
int gcd(int ,int );
int gcd(int x,int y)
{
	int r;
	if(y==0)
	return x;
	else
	{
	 r=x%y;
	 return gcd(y,r) ;
    }
}
int power(int base,int expo)
{
	if(expo==1)
	return base;
	else
	return base*power(base,expo-1);
}
int fact(int n)
{
	if(n<=0)
	return 1;
	else
	return n*fact(n-1);
}
int fibo(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return fibo(n-1)+fibo(n-2);
}
int main()
{
	int choice;
	do
	{
		printf("----------------------------------\n");
		printf("Press 1 for Fibonacci series:\n");
		printf("Press 2 for Factorial:\n");
		printf("Press 3 for Power of x to the y:\n");
		printf("Press 4 for GCD/HCF of 2 number:\n");
		printf("Press 5 for Exit:\n");
		printf("----------------------------------\n\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Fibonacci series selected:\n");
				   int n1;
				   printf("Enter the number for n term fibonacci series:");
				   scanf("%d",&n1);
				   if(n1<1)
				   {
				   	printf("Series not obtain:\n");
				   }
				   else
				   {
				   	int i;
				   	printf("Fibonacci series of %d terms is:",n1);
				   	for(i=0;i<n1;i++)
				   	{
				   	  printf("%d ",fibo(i));
					}
					printf("\n");
				   }
				   break;
			case 2:printf("Factorial selected:\n");
				   int n2;
				   printf("Enter the number for factorial:");
				   scanf("%d",&n2);
				   if(n2<1)
				   {
				   	printf("Factorial not define:\n");
				   }
				   else
				   {
					  int result=fact(n2);
					  printf("Factorial of %d is %d:\n",n2,result);
					  break;
				   }
			case 3:printf("Power selected:\n");
				   int n3,n4;
				   printf("Enter the base:");
				   scanf("%d",&n3);
				   printf("Enter the exponent:");
				   scanf("%d",&n4);
				   printf("The %d times of %d is:%d\n",n4,n3,power(n3,n4));
				   break;
			case 4:printf("HCF selected:\n");
				   int n5,n6;
				   printf("Enter first number:");
				   scanf("%d",&n5);
				   printf("Enter second number:");
				   scanf("%d",&n6);
				   printf("HCF of %d and %d is:%d\n",n5,n6,gcd(n5,n6));
				   break;
			case 5:printf("Exit from program:");
				   exit(0);
				   break;
		}
	}while(choice!=5);
	return 0;
}
