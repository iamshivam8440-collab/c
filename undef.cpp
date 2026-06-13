#include<stdio.h>
#define PI 3.14
//int PI=3; Global declaration
int main()
{
  float r,area,circum;
  printf("Enter the radius of circle:");
  scanf("%f",&r);
  area=PI*r*r;
  printf("Area of circle is:%.2f",area);
  #undef PI
  int PI=2;
  circum=2*PI*r;
  printf("\nCircum of circle:%f",circum); 
  return 0;	
}
