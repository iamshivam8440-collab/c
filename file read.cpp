#include<stdio.h>
int main()
{
  FILE *p;
  char ch;
  p=fopen("Dev.txt","r");
  while((ch=fgetc(p))!=EOF)
  {
    printf("%c",ch);
  }	
  fclose(p);
  return 0;	
}
