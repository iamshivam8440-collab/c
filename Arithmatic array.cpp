#include<stdio.h>
int add(int [2][2],int [2][2]);
int sub(int [2][2],int [2][2]);
int mul(int [2][2],int [2][2]);
int add(int arr[2][2],int Arr[2][2])
{ int i,j;
    printf("Addition of array is:\n");
	for(i=0;i<2;i++)
	{
	 for(j=0;j<2;j++)
	  {
	  	printf("%d ",arr[i][j]+Arr[i][j]);
	  }
	  printf("\n");
	}
	
}
int sub(int arr[2][2],int Arr[2][2])
{
	int i,j;
	printf("Subtraction of array is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",arr[i][j]-Arr[i][j]);
		}
		printf("\n");
	}
}
int mul(int arr[2][2],int Arr[2][2])
{
  int sum,i,j,k;
  printf("Multiplecation of array is:\n");
  for(i=0;i<2;i++)
  {
  	
  	for(j=0;j<2;j++)
  	{sum=0;
  	  for(k=0;k<2;k++)
		{
		  sum+=arr[i][k]*Arr[k][j];	
		}	
	}
  }
  for(i=0;i<2;i++)
  {
  	for(j=0;j<2;j++)
  	{
  	  printf("%d ",sum);	
	}
	printf("\n");
  }
}
int main()
{
	int arr[2][2],i,j,Arr[2][2];
	printf("1st array is:\n");
	for(i=0;i<2;i++)
	{
	  for(j=0;j<2;j++)
	  {	
	   printf("Enter the element of array at %d%d index:",i,j);
	   scanf("%d",&arr[i][j]);
      }
    }
    printf("2nd array is:\n");
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
       printf("Enter the element of array at %d%d index:",i,j);
       scanf("%d",&Arr[i][j]);
	  }
	}
    printf("1st Array is:\n");
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
       {
    	printf("%d ",arr[i][j]);
	   }
	   printf("\n");
	}
	printf("2nd array is:\n");
	for(i=0;i<2;i++)
	{
	  for(j=0;j<2;j++)
	  {
	  	printf("%d ",Arr[i][j]);
	  }
	  printf("\n");
	}
	add(arr,Arr);
	sub(arr,Arr);
	mul(arr,Arr);
	return 0;
}
