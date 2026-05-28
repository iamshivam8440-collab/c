#include<stdio.h>
void fun();
void rev();
void intz();
void multi();
void addrs();
void addrs()
{
	int arr[5][5][5];
	int i,j,k;
	printf("Address of the 3D array:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<5;k++)
			{
				printf("%d\t",&arr[i][j][k]);
			}
		}
	}
}
void multi()
{
	int arr[3][11];
	int i,a,b,c;
	printf("Enter the three numbers for table:");
	scanf("%d %d %d",&a,&b,&c);
	for(i=1;i<11;i++)
	{
		arr[0][i]=a*i;
	}
	printf("Table of %d is:\n",a);
	for(i=1;i<11;i++)
	{
		printf("%d\n",arr[0][i]);
	}
		for(i=1;i<11;i++)
	{
		arr[1][i]=b*i;
	}
	printf("Table of %d is:\n",b);
	for(i=1;i<11;i++)
	{
		printf("%d\n",arr[1][i]);
	}
		for(i=1;i<11;i++)
	{
		arr[2][i]=c*i;
	}
	printf("Table of %d is:\n",c);
	for(i=1;i<11;i++)
	{
		printf("%d\n",arr[2][i]);
	}
}
void intz()
{
	int arr[5]={1,-2,-3,6,7};
	int i;
	printf("Number is positive and their index number is:");
	for(i=0;i<5;i++)
	{
		if (arr[i]<0)
		{
			printf("%d->%d ",arr[i],i);
		}
	}
}
void rev()
{
	int arr[10],l,i;
	int temp;
	printf("\nEnter the size of array:");
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		printf("Enter the element at %d index:",i);
		scanf("%d",&arr[i]);
	}
	printf("\nArray is:");
	for(i=0;i<l;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nReverse array is:");
	for(i=0;i<l/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[l-1-i];
		arr[l-1-i]=temp;
	}
	for(i=0;i<l;i++)
	printf("%d ",arr[i]);
}
void fun()
{
	int arr[12],i,n;
	printf("Enter the number for table:");
	scanf("%d",&n);
	for(i=1;i<11;i++)
	{
		arr[i]=n*i;
	}
	printf("Table of %d is:\n",n);
	for(i=1;i<11;i++)
	{
	  printf("%d\n",arr[i]);
	}
}
int main()
{
	fun();
	rev();
	intz();
	multi();
    addrs();
	return 0;
}
