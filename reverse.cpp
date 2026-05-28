#include<stdio.h>
#include<string.h>
int main()
{
  char str1[200],str2[200];
  int i;
  printf("Enter the string:");
  gets(str1);
  printf("String is:");
  puts(str1);
  int l=strlen(str1);
  for(i=0;str1[i]!='\0';i++)
  {
  	str2[i]=str1[l-i-1];
  }	
  str2[l]='\0';
  printf("Reverse string is:%s ",str2);
  return 0;	
}
