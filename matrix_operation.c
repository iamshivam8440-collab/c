#include<stdio.h>
#include<stdlib.h>
void multi(int a[5][5],int b[5][5],int r1,int c1,int c2);
void sum(int a[5][5],int b[5][5],int r1,int c1,int r2,int c2);
void sub(int a[5][5],int b[5][5],int r1,int c1,int r2,int c2);
void print(int c[5][5],int r1,int c2);
void result(int c[5][5],int r1,int c1);
void result(int c[5][5],int r1,int c1)
{
	int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
void sum(int a[5][5],int b[5][5],int r1,int c1,int r2,int c2)
{
	int d[5][5];
	int i,j;
	if(r1==r2&&c1==c2)//rows and column both matrix is same
	{
	  for(i=0;i<r1;i++)
	  {
	    for(j=0;j<c2;j++)
		{	
		  d[i][j]=a[i][j]+b[i][j];	
		}	
	  }
	  printf("Matrix addition is:\n");
	  result(d,r1,c1);	
	}
	else
	{
		printf("Addition of matrix is not possible:\n");
	}
}
void sub(int a[5][5],int b[5][5],int r1,int c1,int r2,int c2)
{
	int d[5][5];
	int i,j;
	if(r1==r2&&c1==c2)
	{
	  for(i=0;i<r1;i++)
	  {
	    for(j=0;j<c2;j++)
		{	
		  d[i][j]=a[i][j]-b[i][j];	
		}	
	  }
	  printf("Matrix subtraction is:\n");
	  result(d,r1,c2);	
	}
	else
	{
		printf("Subtraction of matrix is not possible:\n");
	}
}
void multi(int a[5][5],int b[5][5],int r1,int c1,int c2)
{
	int c[5][5];
	int k,i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<c1;k++)
			{
			  c[i][j]+=a[i][k]*b[k][j];	
			}
		}
	}
	printf("Matrix multiplication is:\n");
	print(c,r1,c2);
}
void print(int c[5][5],int r1,int c2)
{
	int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int r1,r2,c1,c2,i,j;
	int perform;
	int a[5][5];
	int b[5][5];
	printf("Enter the rows and column for matrix 1st:");
	scanf("%d %d",&r1,&c1);
	printf("Enter the rows and column for matrix 2nd:");
	scanf("%d %d",&r2,&c2);
	printf("For first matrix:\n");
	          for(i=0;i<r1;i++)
	          {
	   	       for(j=0;j<c1;j++)
		       {
			    scanf("%d",&a[i][j]);
		       }
              }
	           printf("For second matrix:\n");
	           for(i=0;i<r2;i++)
	           {
		        for(j=0;j<c2;j++)
		        {
			     scanf("%d",&b[i][j]);
		        }
	           }
	while(1)
	{
	 printf("-------------------------------------------\n");	
     printf("Press 1 for matrix multiplication:\n");
     printf("Press 2 for matrix addition:\n");
	 printf("Press 3 for matrix subtraction:\n");
	 printf("Press 4 for exit:\n");		
	 printf("-------------------------------------------\n");
	 printf("Enter the number which operation perform:");
     scanf("%d",&perform);	
     switch(perform)
     {
	  case 1:printf("Perform matrix multiplication:\n");
	         if(c1!=r2)
	         {
		      printf("Matrix multiplication not possible:\n");
	         }
	         else
	         {
	            printf("Newly matrix is %d*%d:\n",r1,c2);
	            multi(a,b,r1,c1,c2);
             }
            break;
     case 2:printf("Perform matrix addition:\n");
	        sum(a,b,r1,c1,r2,c2);
            break;
     case 3:printf("Perform matrix subtraction:\n");
	        sub(a,b,r1,c1,r2,c2);
            break;
     case 4:printf("Exit for loop:\n");
            exit(0);
     default:printf("Invalid input:\n");
	         break;        
     } 
    }
	return 0;
}
