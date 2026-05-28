#include<stdio.h>
void eql();
void len();
void strcopy();
void encrypt(char);
void decrypt(char);
void str(char []);
void str(char str1[20])
{
  char ch;
  int i=0,string;
  printf("Enter the character is found in string:");
  scanf("%c",&ch);	 
  while(str1[i]!='\0')
  {
   if(str1[i]!=ch)
   {
     string=0; 	
   }	
   i++;
  }
  if(string==0)
  {
  	printf("Character is not present:");
  }
  else
   {
     printf("Character is present:");
   }
}
void decrypt(char ch[20])
{
	int i;
    printf("\nDecrypt string is:");
	for(i=0;ch[i]!='\0';i++)
	{
		printf("%c",ch[i]-1);
	}	
}
void encrypt(char ch[20])
{
	int i;
	char str1[20];
    printf("Encrypt string is:");
    for(i=0;ch[i]!='\0';i++)
    {
    	printf("%c",ch[i]+1);
    }
	
}
void strcopy()
{
	char str1[20],str2[20];
	int i;
	printf("Enter your string:");
	scanf("%s",str1);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("Copied string is:");
	puts(str2);
}
void len()
{
	char ch[20]="shivam";
	int i,length=0;
	for(i=0;ch[i]!='\0';i++)
	{
	   length++;	
	}
	printf("\nLength of the string is:%d\n",length);
}
void eql()
{
	char c[20],C[20];
	int i;
	printf("Enter your string:");
	for(i=0;i<18;i++)
	{
		scanf("%c",&c[i]);
	}
	printf("String is:");
	for(i=0;i<20;i++)
	{
		printf("%c",c[i]);
	}
	printf("\nEnter your string:");
	scanf("%[^\n]",C);
	printf("string is:");
	printf("%s",C);
}
int main()
{
	char ch[20];
	printf("Enter your string:");
    gets(ch);
	eql();
	strcopy();
	len();
	encrypt(ch);
	decrypt(ch);
    str(ch);
	return 0;
}

