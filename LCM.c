#include<stdio.h>
int main()
{
	int x,y,i;
	printf("Enter 2 number for LCM:");
	scanf("%d %d",&x,&y);
	for(i=x>y?x:y;i<=x*y;i++)
	{
		if(i%x==0&&i%y==0)
		{
			printf("LCM of %d and %d is:%d ",x,y,i);
			break;
		}
	}
	return 0;
}
