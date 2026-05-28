#include<stdio.h>
void table();
void Table();
void natural();
void mul();
void fact();
void Fact();
void prime();
void Prime();
void Prime()
{
	int i,n,prime=1;
	printf("Enter the number for decide prime or not:");
	scanf("%d",&n);
	i=2;
	while(i<n)
	{
		if(n%i==0)
		{
			prime=0;
			break;
		}
		i++;
	}
	if(n%i==0&&n!=2)
	{
	  printf("%d is not prime number:\n",n);	
	}
	else
	{
      printf("%d is prime number:\n",n);
	}
}
void prime()
{
	int i,n,prime=1;
	printf("Enter the number for decide prime or not:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		 prime=0;
		 break;
		}
    }
	if(prime==0 && n!=2)
	{
		printf("%d is not prime number:\n",n);
	}
	else
		{
			printf("%d is prime number:\n",n);
		}
	
}
void Fact()
{
	int n,fact=1;
	printf("Enter the number for factorial:");
	scanf("%d",&n);
	int i=n;
	while(i>1)
	{
		fact*=i;
		i--;
	}
	printf("Factorial is:%d\n",fact);
}
void fact()
{
	int i,fact=1,n;
	printf("Enter the number for factorial:");
	scanf("%d",&n);
	for(i=n;i>1;i--)
	{
		fact*=i;
	}
	printf("Factorial is:%d\n",fact);
}
void mul()
{
	int i,n=8,sum=0;
	for(i=1;i<11;i++)
	{
		sum+=i*n;
	}
	printf("Sum of the multiple of 8 is:%d\n",sum);
}
void natural()
{
	int i=1,sum=0;
	while(i<=10)
	{
		sum+=i;
		i++;
	}
	printf("\nSum of 10 natural number is:%d\n",sum);
}
void Table()
{
	int i,n;
	printf("Enter the number fo table:");
	scanf("%d",&n);
	for(i=10;i>=1;--i)
	{
		printf("%d * %d=%d\n",n,i,n*i);
	}
}
void table()
{
	int i,n;
	printf("Enter the number for table:");
	scanf("%d",&n);
	for(i=1;i<11;i++)
	{
		printf("%d * %d=%d\n",n,i,i*n);
	}
}
int main()
{
	table();
	Table();
	natural();
	mul();
	fact();
	Fact();
	prime();
	Prime();
	return 0;
}
