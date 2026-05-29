#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[20];
	char ch2[20];
	char ch3[20];
	printf("Enter the first string:");
	gets(ch1);
	printf("Enter the second string:");
	gets(ch2);
	printf("String ch1 and ch2 length is:%d %d\n",strlen(ch1),strlen(ch2));
	printf("String ch1 copied in ch3 is:%s\n",strcpy(ch3,ch1));
	printf("String ch2 copied in ch3 is:%s\n",strcpy(ch3,ch2));
	printf("String ch1 and ch2 concatinate:%s\n",strcat(ch1,ch2));
	printf("Upper case of string:%s\n",strupr(ch1));
	printf("Lower case of string:%s\n",strlwr(ch1));
    printf("Compare ch1 and ch2 is:");
    if(strcmp(ch1,ch2))
    {
    	printf("String is same:");
	}
	else
	{
		printf("String is different:");
	}
	return 0;
}
