#include<stdio.h>
int main()
{
  int *p;
  int x,y;
  p=&x;
  printf("Enter the number:");
  scanf("%u",&x);
  while(*p!=0)
  {
  	y=*p%10;
  	*p=*p/10;
  	printf("%d",y);
  }
  return 0;	
}
