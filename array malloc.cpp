#include<stdio.h>
#include<stdlib.h>
int main()
{ 
  int *p;
  int n,i;
  printf("Enter the size of element that you want:");
  scanf("%d",&n);
  p=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
  	printf("Enter the element at %d index:",i);
  	scanf("%d",&p[i]);
  }
  printf("Array is:");
  for(i=0;i<n;i++)
  {
  	printf("%d ",p[i]);
  }
  return 0;	
}
