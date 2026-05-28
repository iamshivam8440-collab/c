#include<stdio.h>
int main()
{
	FILE *ptr;
	char ch;
	ptr=fopen("NITIN.txt","r+");
	while((ch=fgetc(ptr))!=EOF)
	{
		printf("%c",ch);
	}
	printf("\n");
	fprintf(ptr,"hello,Good after noon");
	fclose(ptr);
	return 0;
}
