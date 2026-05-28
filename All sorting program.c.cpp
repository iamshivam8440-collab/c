#include<stdio.h>
void swap(int *a,int *b);
void qsort(int a[],int low ,int high);
void print(int a[],int n);
void bubble(int a[],int n);
void insertion(int a[],int n);
void selection(int a[],int n);
int main()
{ int a[100],n,i;
  printf("Enter the size of array:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	printf("Enter the element at %d index:",i);
  	scanf("%d",&a[i]);
  }
  printf("Array is:");
  for(i=0;i<n;i++)
  {
  	printf("%d ",a[i]);
  }
  bubble(a,n);
  printf("\nBubble sort is:");
  print(a,n);
  insertion(a,n);
  printf("\nInsertion sort is:");
  print(a,n);
  selection(a,n);
  printf("\nSelection sort is:");
  print(a,n);
  qsort(a,0,n-1);
  printf("\nQuick sort is:");
  print(a,n);
 return 0;
}
void qsort(int a[],int low ,int high)
{
  int pivot,i,j;
  if(low<high)
  {
  	pivot=a[low];
  	i=low;
  	j=high+1;
  	do
  	{
      do
	  {
	    i++;
	  }	while(a[i]<=pivot);
	  do
	  {
	  	j--;
	  }while(a[j]>pivot);
	  if(i<j)
	  {
	  	swap(&a[i],&a[j]);
	  }
	}while(i<j);
	swap(&a[low],&a[j]);
	qsort(a,low,j-1);
	qsort(a,j+1,high);
  }
}
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;	
}
void print(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }	
    printf("\n");
}
void bubble(int a[],int n)
{ int i,j;
  for(i=0;i<n-1;i++)
  {
  	for(j=0;j<n-1-i;j++)
  	{
	  if(a[j]>a[j+1])
	  {
	  	swap(&a[j],&a[j+1]);
	  }
	}
  }
}
void insertion(int a[],int n)
{
  int i,j,temp;
  for(i=1;i<n;i++)
  {
    temp=a[i];
    j=i-1;
    while(j>=0&&a[j]>temp)
    {
      a[j+1]=a[j];
      j--;
	}
	a[j+1]=temp;
  }	
}
void selection(int a[],int n)
{
 int i,j,min;
 for(i=0;i<n-1;i++)
 { 
   min=i;
   for(j=i+1;j<n;j++)
   {
     if(a[j]<a[min])
	 {
	   min=j;
	 }	
   } 
   swap(&a[i],&a[min]);
 }	
}
