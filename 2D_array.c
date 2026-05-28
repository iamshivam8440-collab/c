#include<stdio.h>
void fun(int arr[10][10],int n);
void fun(int arr[10 ][10],int n)
{
	int i,j;
	printf("Array is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[50][10],n,i,j;
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the at %d%d index:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	fun(arr,n);
	return 0;
}
