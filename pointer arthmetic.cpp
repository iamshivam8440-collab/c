#include<stdio.h>
int main()
{
  int a=10,b=20;
  int *ptr1,*ptr2,k;
  ptr1=&a;
  ptr2=&b;
  printf("%d\n",sizeof(int));
  printf("\nBefore increment:%d %d\n",ptr1,ptr2);
  //sub two pointer..
  k=ptr1-ptr2;
  printf("Sub two pointer:%d\n",k);
  //increment & decrement pointer.
  ptr1--;
  ptr2--;
  printf("Increment & Decrement pointer:%d  %d\n",ptr1,ptr2);
  //sub & add integer pointer.
  printf("Add integer pointer:%d\n",ptr1+2);
  printf("Add integer pointer:%d\n",ptr2+3);
  printf("Sub integer pointer:%d\n",ptr1-2);
  printf("Sub integer pointer:%d\n",ptr2-3);
  return 0;	
}
