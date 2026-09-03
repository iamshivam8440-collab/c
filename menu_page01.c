#include<stdio.h>
void armstron(int );
void GA3(int ,int ,int );
void GA2(int ,int );
void leap(int );
void S13(int );
void prime(int );
void Mtable(int );
void SAD(int );
void REV(int );
int fact(int );
int fibo(int );
int ADN(int );
void EON(int );
void PNC(int );
void PNC(int n1)
{
	int k=n1;
	int a;
	int rem=0;
	/*  1221,12321 is palindrome number: read both side output is same:*/
	while(k!=0)
	{
		a=k%10;
		rem=rem*10+a;
		k=k/10;	
	}
	if(n1==rem)
	printf("%d is palindrome number:\n",n1);
	else
	printf("%d is not palindrome number:\n",n1);
}
void EON(int n2)
{
	if(n2%2==0)
	printf("%d is even number:\n",n2);
	else 
	printf("%d is odd number:\n",n2);
}
int ADN(int n1)
{
	if(n1==1||n1==0)
	return 1;
	else
	return n1+ADN(n1-1);
}
int fibo(int n3)
{
	if(n3==0)
	return 0;
	else if(n3==1)
	return 1;
	else
	return fibo(n3-1)+fibo(n3-2);
}
int fact(int n2)
{
	if(n2==0 && n2==1)
	return 1;
	else
	return n2*fact(n2-1);
}
void SAD(int n1)
{
	int a;
	int sum=0;
	while(n1!=0)
	{
		a=n1%10;
		sum+=a;
		n1=n1/10;
	}
	printf("Sum of number is:%d\n",sum);
}
void REV(int n1)
{
	int a;
	int rem=0;
	while(n1!=0)
	{
		a=n1%10;
		rem=rem*10+a;
		n1=n1/10;
	}
	printf("Reverse number is:%d\n",rem);
}
void Mtable(int n3)
{
	int i;
	int term;
	printf("Enter the number for term:");
	scanf("%d",&term);
	for(i=1;i<=term;i++)
	{
		printf("%d * %d = %d\n",n3,i,i*n3);
	}
}
void prime(int n2)
{
	int i;
	int count=0;
	for(i=1;i<=n2;i++)
	{
		if(n2%i==0)
		{
			count++;
		}
	}
	(count<=2)?printf("%d is prime number:\n",n2):printf("%d is not prime:\n",n2);
}
void S13(int n2)
{
	int a;
	int n1=n2;
	int count=0,sum=0;
	while(n1!=0)
	{
		a=n1%10;
		n1=n1/10;	
		count++;
		if(count==3||count==5)
		{
			sum+=a;
		}
	}
	printf("Number %d sum of 1st & 3rd digit is %d:\n",n2,sum);
}
void leap(int n1)
{
	if(n1%400==0 || (n1%4==0 && n1%100!=0))
	printf("%d is leap year:\n",n1);
	else
	printf("%d is not leap year:\n",n1);
}
void GA2(int n1,int n2)
{
	if(n1>n2)
	printf("%d is greater:\n",n1);
	else if(n2>n1)
	printf("%d is greater:\n",n2);
	else
	printf("All number is same:\n");
}
void GA3(int n1,int n2,int n3)
{
	if(n1>n2 && n1>n3)
	printf("%d is greater:\n",n1);
	else if(n2>n1 && n2>n3)
	printf("%d is greater:\n",n2);
	else if(n3>n1 && n3>n2)
	printf("%d is greater:\n",n3);
	else
	printf("All number is same:\n");
}
void armstrong(int n)
{
	int i,a,sum=0;
	int k=n;
	while(k!=0)
	{
		a=k%10;
		sum+=(a*a*a);
		k=k/10;
	}
	if(n==sum)
	printf("%d is armstrong:\n",n);
	else
	printf("%d is not armstrng:\n",n);
	
}
int main()
{
	int num,n,i;
	int n1,n2,n3;
	int sum=0;
	do{
		printf("---------------------------------\n");
		printf("Press 1 for armstrong number:\n");
		printf("Press 2 for greatest among three:\n");
		printf("Press 3 for greatest b\w two:\n");
		printf("Press 4 for leap year check:\n");
		printf("Press 5 for sum 1st and 3rd digit:\n");
		printf("Press 6 for prime number:\n");
		printf("Press 7 for multiplication table:\n");
		printf("Press 8 for sum of all digit:\n");
		printf("Press 9 for reverse of a number:\n");
		printf("Press 10 for factorial of a number:\n");
		printf("Press 11 for fibonacci series:\n");
		printf("Press 12 for addition of n number:\n");
		printf("Press 13 for check even/odd of a number:\n");
		printf("Press 14 for palindrome number checK:\n");
		printf("Press 15 for exit the program:\n");
		printf("---------------------------------\n");
		printf("Enter a number for perform operation:");
		scanf("%d",&num);
		switch(num)
		{
			case 1:printf("Armstrong number:\n");
				   printf("Enter a number:");
				   scanf("%d",&n);
				   armstrong(n);
				   break;
			case 2:printf("Greatest among three number:\n");
				   printf("Enter the first number:");
				   scanf("%d",&n1);
				   printf("Enter second number:");
				   scanf("%d",&n2);
				   printf("Enter third number:");
				   scanf("%d",&n3);
				   GA3(n1,n2,n3);
				   break; 
			case 3:printf("Greatest b\w two number:\n");
				   printf("Enter first number:");
				   scanf("%d",&n1);
				   printf("Enter second number:");
				   scanf("%d",&n2);
				   GA2(n1,n2);
				   break;
			case 4:printf("Leap year check:\n");
				   printf("Enter a year:");
				   scanf("%d",&n1);
				   leap(n1);
				   break;
			case 5:printf("Sum 1st and 3rd digit of 5 digit number:\n");
				   printf("Enter a number:");
				   scanf("%d",&n1);
				   S13(n1);
				   break;
			case 6:printf("Prime number:\n");
				   printf("Enter a number:");
				   scanf("%d",&n2);
				   prime(n2);
				   break;
			case 7:printf("Multiplication table:\n");
				   printf("Enter a number:");
				   scanf("%d",&n3);
				   Mtable(n3);
				   break;
			case 8:printf("Sum of all digits:\n");
				   printf("Enter a number:");
				   scanf("%d",&n1);
				   SAD(n1);
				   break;
			case 9:printf("Reverse of a number:\n");
				   printf("Enter a number:");
				   scanf("%d",&n1);
				   REV(n1);
				   break;
			case 10:printf("Factorial of number:\n");
				    printf("Enter a number:");
				    scanf("%d",&n2);
				    if(n2<=0)
				    printf("Factorial not perform:\n");
				    else
				    fact(n2);
				    break;
			case 11:printf("Fibonacci series:\n");
				    printf("Enter a number to calculate n term sreies:");
				    scanf("%d",&n3);
				    if(n3<0)
				    {
				    	printf("Fibonacci series not perform:\n");
					}
				    else
				    {
				    	printf("Fibonacci series of %d term is:",n3);
				    	for(i=0;i<n3;i++)	
				        printf("%d ",fibo(i));
					}
					printf("\n");
				    break;
			case 12:printf("Addition of n number:\n");
					printf("Enter a number:");
					scanf("%d",&n1);
					if(n1<=0)
					printf("Addition not perform:\n");
					else
					{
						printf("Addition of %d term is:",n1);
						sum=ADN(n1);
						printf("%d ",sum);		
					}
					printf("\n");
					break;
			case 13:printf("Check even/odd of a number:\n");
				    printf("Enter a number:");
				    scanf("%d",&n2);
				    EON(n2);
				    break;
			case 14:printf("Palindrome number check:\n");
					printf("Enter a number:");
					scanf("%d",&n1);
					PNC(n1);
					break;
			case 15:printf("Exit from program:");
					exit(0);
					break;
			default:printf("Invalid input!!\n");
					break;
		}
	}while(num!=15);
	return 0;
}
