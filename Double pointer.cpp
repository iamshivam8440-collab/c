#include<stdio.h>
int main()
{
  int *ptr1;
  int a=100;
  int **ptr2;
  int ***ptr3;
  ptr1=&a;
  ptr2=&ptr1;
  ptr3=&ptr2;
  printf("%d\n",a);	
  printf("%d\n",&a);
  printf("%d\n",ptr1);
  printf("%d\n",*ptr1);
  printf("%d\n",&ptr1);
  printf("%d\n",*(&ptr2));
  printf("%d\n",**ptr2);
  printf("%d\n",&ptr3);
  printf("%d\n",**ptr3);
  printf("%d\n",***ptr3);
  return 0;	
}
