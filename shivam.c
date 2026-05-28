#include<stdio.h>
int main()
{
	FILE *ptr;
	char ch;
	ptr=fopen("NITIN.txt","w+");
	fprintf(ptr,"hello:\n");
	while((ch=fgetc(ptr))!=EOF)
	{
	  printf("%c",ch);
	}
	fclose(ptr);
	return 0;
}
