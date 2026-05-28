#include<stdio.h>
int main()
{ 
  int arr[10];
  int n,i,*ptr;
  ptr=&arr;
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
  	printf("%d\t",*(ptr+i));//*(ptr+i) and *(ptr++) both are same.
  }
  return 0;	
}
