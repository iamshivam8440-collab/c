#include<stdio.h>
void exchange(int *,int *);
void swap(int *,int *);
void Arr(int *,int);
int f(char *p);
int f(char *p)
{
	char *q=p;
	while(*++p);
	return (p-q);
}
void swap(int a,int b)
{
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After Aswap:a=%d,b=%d\n",a,b);	 
}
void exchange(int *a,int *b)
{
	 int t=*a;
	 *a=*b;
	 *b=t;
	printf("After swap:a=%d,b=%d\n",*a,*b);
}
int main()
{
  int a=10,b=20;
  printf("Before swap:a=%d,b=%d\n",a,b);
  swap(a,b); 
  exchange(&a,&b);
  int i,arr[20],n;
  printf("Enter the size of array:"); 
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	printf("Enter the element at %d index:",i);
  	scanf("%d",&arr[i]);
  }
  Arr(arr,n);
  char str[]="ANSI";
  printf("%d",f(str));
  return 0;	
}
void Arr(int *p,int n)
{
  int i;
  printf("Array is:");
  for(i=0;i<n;i++)
  {
    printf("%d ",*(p+i));//p[i] and *(p+i) both are same.   	
  }	
}
