#include<stdio.h>
int main()
{
	int i,marks[5],total=0;
	float per;
	for(i=0;i<5;i++)
	{
	 printf("Enter your marks in %d subject:",i);
	 scanf("%d",&marks[i]);
    }
    printf("Number obtain in subject:");
    for(i=0;i<5;i++)
    {
      printf("%d\t",marks[i]);	
      total+=marks[i];
	}
	printf("\nTotal marks obtain is:%d\n",total);
	per=total/5;
	printf("Percentage is:%.2f\n",per);
	if(per>=90&&per<=100)
	{
		printf("Grade A!\n");
	}
	else if(per>90&&per<=80)
	{
		printf("Grade B!");
	}
	else if(per>80&&per<=70)
	{
		printf("Grade C!");
	}
	else if(per>70&&per<=60)
	{
		printf("Grade D!");
	}
	else
	{
		printf("Fail");
	}
 	return 0;
}
