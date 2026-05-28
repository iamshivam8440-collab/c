#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c;
  printf("Enter the value of cofficient of x^2 is:");
  scanf("%d",&a);
  printf("Enter the value of cofficient of x is:");
  scanf("%d",&b);
  printf("Enter the value of constant is:");
  scanf("%d",&c);
  float x1,x2;
  x1=(-b+sqrt(b*b-4*a*c))/2*a;
  x2=(-b-sqrt(b*b-4*a*c))/2*a;
  printf("Root of the equation is:x1=%.2f,x2=%.2f",x1,x2);
  return 0;	
}
