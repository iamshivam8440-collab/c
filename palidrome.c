#include<stdio.h>
#include<string.h>
void palidrome(char ch[10]);
void palidrome(char ch[10])
{
  int i=0;
  int l=strlen(ch);
  char temp;
  while(i<l/2)
  {
    if(ch[i]!=ch[l-1-i])
    {
    	printf("Not palindrome:");
    	break;
	}
    i++;
  }	
  if(i==l/2)
  {
  	printf("palindrome:");
  }
}
int main()
{
	char ch[20];
	printf("Enter your string:");
	gets(ch);
	palidrome(ch);
   return 0;
}
