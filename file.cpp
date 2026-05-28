#include<stdio.h>
int main()
{
 FILE *p;
 p=fopen("UIM.txt","w");
 fprintf(p,"Hello my self shivam chaurasiya-");
 fclose(p);	
 return 0;	
}
