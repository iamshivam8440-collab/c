#include<stdio.h>
void bubble(int arr[],int n);
void swap(int *a,int *b);
void selection(int arr[],int n);
void selection(int arr[],int n)
{
  int i,min,j;
  for(i=0;i<n-1;i++)
  {
    min=i;
	for(j=1+i;j<n-1;j++)
	{
       if(arr[j]<arr[min])
       {
       	min=j;
	   }
    } 
	   swap(&arr[i],&arr[min]);
      	
  }	
  printf("\nSorted array is:");
  for(i=0;i<n;i++)
  {
  	printf("%d ",arr[i]);
  }
}
void swap(int *a,int *b)
{
   int temp=*a;
   *a=*b;
   *b=temp;
}
void bubble(int arr[],int n)
{
  int i,j;
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
  printf("\nSorted array is:");
  for(i=0;i<n;i++)
  {
  	printf("%d ",arr[i]);
  }
}
int main()
{
  int arr[10],n,i;
  printf("Enter the size of array:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	printf("Enter the element at %d index:",i);
  	scanf("%d",&arr[i]);
  }
  printf("Array is:");
  for(i=0;i<n;i++)
  {
  	printf("%d ",arr[i]);
  }
  bubble(arr,n);
  selection(arr,n);
  return 0;	
}
