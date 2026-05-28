#include<stdio.h>
int add(int *,int *);
int add(int *a,int *b)
{
  return *a+*b;
}
int main()
{
  int a=100;
  int b=123;
  int c=add(&a,&b);
  printf("%d",c);
  return 0;	
}
