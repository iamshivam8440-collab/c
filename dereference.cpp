#include<stdio.h>
struct zstd{
	int sub[5];
};
int main()
{
  struct zstd s1; 
  int i,sum=0;
  for(i=0;i<5;i++)
  {
   printf("Enter the subject %d marks:",i);
   scanf("%d",&s1.sub[i]);
  }
  printf("Marks is:");
  for(i=0;i<5;i++)
  {
  	printf("%d ",s1.sub[i]);
  }
  printf("\nTotal marks is:");
  for(i=0;i<5;i++)
  {
    sum+=s1.sub[i];	
  }
  printf("%d ",sum);
  printf("\nPercentage:");
  int p=(sum/5);
  printf("%d per",p);
  return 0;	
}


