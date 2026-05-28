#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("Dev.txt","w");
	fprintf(ptr,"Today is the last class of 2nd semester:");
	fclose(ptr);
	return 0;
}
