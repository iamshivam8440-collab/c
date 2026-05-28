#include<stdio.h>
int binary(int a[],int n,int key);
int main()
{ int a[10],n,result,key;
  printf("Enter the size of array:");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
   printf("Enter the element at %d index:",i);
   scanf("%d",&a[i]);
  }
  printf("Which numbner is found:");
  scanf("%d",&key);
  result=binary(a,n,key);
  if(result==-1)
  printf("Not found:");
  else
  printf("Found:");
  return 0;	
}
int binary(int a[],int n,int key)
{
 int l,h,mid=(l+h)/2;
 while(l<=h)
 {
  if(key==a[mid])
  {
  	return mid;
  }
  else if(key<a[mid])
  {
  	h=mid-1;
  }
  else
  {
    l=mid+1;
  }
 }
 return -1;
}

