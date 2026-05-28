#include<stdio.h>
int main()
{
	char ch[20],str;
	int i=0,count=0;
	printf("Enter your string:");
	gets(ch);
	printf("Enter your character occurence present in string:");
	scanf("%c",str);
	while(ch[i]!='\0')
	{
		if(ch[i]==str)
		{
			count++;
		}
		i++;
	}
	printf("Occurence of %c is %d:",str,count);
	return 0;
}
