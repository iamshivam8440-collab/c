#include<stdio.h>
void bubble(int arr[100],int n);
void insertion(int arr[100],int n);
void selection(int arr[100],int n);
void swap(int *a,int *b);
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
void selection(int arr[100],int n)
{
  int i,j,temp,min;
  for(i=0;i<n-1;i++)
  {
  	min=i;
  	for(j=i+1;j<n;j++)
  	{
	  if(arr[j]<arr[min])
	  {
	  	min=j;
	  }
	  swap(&arr[i],&arr[min]);
	}
  }
  printf("\nSelection sort is:");
  for(i=0;i<n;i++)
  {
  	printf("%d ",arr[i]);
  }
}
void insertion(int arr[100],int n)
{
  int i,j,temp;
  for(i=1;i<n;i++)
  {
  	temp=arr[i];
  	j=i-1;
  	while(j>=0&&arr[j]>temp)
  	{
	 arr[j+1]=arr[j];
	 j--;
	}
	arr[j+1]=temp;
  }
  printf("\nInsertion sort is:");
  for(i=0;i<n;i++)
  {
  	printf("%d ",arr[i]);
  }
}
void bubble(int arr[100],int n)
{
  int i,j,temp;
  for(i=0;i<n-1;i++)
  {
  	for(j=0;j<n-1-i;j++)
  	{
  	  if(arr[j]>arr[j+1])
		{
		  swap(&arr[j],&arr[j+1]);
		}	
	}
  }
  printf("\nBubble sort is:");
  for(i=0;i<n;i++)
  {
  	printf("%d ",arr[i]);
  }
}
int main()
{
  int arr[20],n,i;	
  printf("Enter the size of array:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	printf("Enter the element at %d index:",i);
  	scanf("%d",&arr[i]);
  }
  printf("Unsorted array is:");
  for(i=0;i<n;i++)
  {
  	printf("%d ",arr[i]);
  }
  bubble(arr,n);
  insertion(arr,n);
  selection(arr,n);
  return 0;
}
