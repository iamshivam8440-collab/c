#include<stdio.h>
#include<stdlib.h>
void arithmetic();
void relational();
void relational()
{
	int a,b;
	int num;
	printf("Press 1 for greater than:\n");
	printf("Press 2 for less than:\n");
	printf("Press 3 for less than or equal to:\n");
	printf("Press 4 for greater than or equal to:\n");
	printf("Press 5 for equal to:\n");
	printf("Press 6 for not equal to:\n");
	printf("Press 7 for exit loop:\n\n\n");
	while(1){
		printf("Enter the nummber to perform operation:");
		scanf("%d",&num);
		switch(num){
		   case 1:printf("Perform graeter than:\n");
		          printf("Enter the first number:");
		          scanf("%d",&a);
		          printf("Enter the second number:");
		          scanf("%d",&b);
		          if(a>b)
		          printf("Greater number is %d:\n",a);
		          else if(a==b)
		          printf("Number is equal:\n");
		          else
		          printf("Greater number is %d:\n",b);
		          break;
		   case 2:printf("Perform less than:\n");
		          printf("Enter the first number:");
		          scanf("%d",&a);
		          printf("Enter the second number:");
		          scanf("%d",&b);
		          if(a<b)
		          printf("Less number is %d:\n",a);
		          else if(a==b)
		          printf("Number is equal:\n");
		          else
		          printf("Less number is %d:\n",b);
		          break;
		   case 3:printf("Perform less than or equal to:\n");
		          printf("Enter the first number:");
		          scanf("%d",&a);
		          printf("Enter the second number:");
		          scanf("%d",&b);
		          if(a<=b)
		          printf("Less than or equal to number is %d:\n",a);
		          else
		          printf("Less than or equal to number is %d:\n",b);
		          break;
		   case 4:printf("Perform greater than or equal to:\n");
		          printf("Enter the first number:");
		          scanf("%d",&a);
		          printf("Enter the second number:");
		          scanf("%d",&b);
		          if(a>=b)
		          printf("Greater than or equal to is %d:\n",a);
		          else
		          printf("Greater than or equal to is %d:\n",b);
		          break;
		   case 5:printf("Perform equal to:");
		          printf("Enter the first number:");
		          scanf("%d",&a);
		          printf("Enetr the second number:");
		          scanf("%d",&b);
		          if(a==b)
		          printf("Number is equal:\n");
		          else
		          printf("Number is not equal:\n");
		          break; 
		   case 6:printf("Perform not equal to:\n");
		          printf("Enter the first number:");
		          scanf("%d",&a);
		          printf("Enetr the second number:");
		          scanf("%d",&b);
		          if(a!=b)
		          printf("Number is not equal:\n");
		          else if(a==b)
		          printf("Number is equal:\n");
		          break;
		   case 7:printf("Exit for loop:\n");
		          exit(0);
		          break;
		   default:printf("Invalid numbar:\n");
		           break;	
		}
	}
}
void arithmetic()
{
	int  ch,a,b;
	float x,y;
	printf("Press 1 for addition:\n");
	printf("Press 2 for subtraction:\n");
	printf("Press 3 for multiplication:\n");
	printf("Press 4 for division:\n");
	printf("Press 5 for modules:\n");
	printf("Press 6 for exit:\n\n\n");
	while(1){
	printf("Enter the number to perform operation:");
	scanf("%d",&ch);
	switch(ch)
	{
	  case 1:printf("Perform Addition:\n");
	         printf("Enter the first number:");
	         scanf("%f",&x);
			 printf("Enter the second number:");
			 scanf("%f",&y);
			 printf("Sum of %.2f and %.2f is %.2f:\n",x,y,x+y);	
			 break;
	  case 2:printf("Perform subtraction:\n");
	         printf("Enter the first number:");
	         scanf("%f",&x);
			 printf("Enter the second number:");
			 scanf("%f",&y);
			 printf("Subtraction of %.2f and %.2f is %.2f:\n",x,y,x-y);
			 break;
	  case 3:printf("Perform Multiplication:\n");
	         printf("Enter the first number:");
	         scanf("%f",&x);
			 printf("Enter the secondd number:");
			 scanf("%f",&y);		 		 
			 printf("Multiplication of %.2f and %.2f is %.2f:\n",x,y,x*y);
			 break;
	  case 4:printf("Perform Division:\n");
	         printf("Enter the first number:");
	         scanf("%f",&x);		 
	         printf("Enter the second number:");
	         scanf("%f",&y);
	         if(y<=0.0)
	         {
	         	printf("Not define division:\n");
			 }
			 else
			 {
			 	printf("Division of %.2f and %.2f is %.2f:\n",x,y,x/y);
			 }
			 break;
	  case 5:printf("Perform modules:\n");
	         printf("Enter the first number:");
	         scanf("%d",&a);
			 printf("Enter the second number:");
			 scanf("%d",&b);
			 if(b==0)
			 {
			    printf("Modules not define(demoninator=0):\n");
			 }		 
			 else 
			 {
			 	printf("Modules of %d and %d is %d:\n",a,b,a%b);
			 }
			 break;
	  case 6:printf("Exit for loop:\n");
	         exit(0);
	         break;		 
	  default:printf("Inavlid input:\n");
	          break;		 
	}//switch case
   }//while loop
}
int main()
{
	int a;
	printf("Press 1 for arithmetic operation:\n");
	printf("Press 2 for relational operation:\n\n\n");
	printf("Enter the number to perform operator:");
	scanf("%d",&a);
	switch(a){
	case 1:arithmetic();
	       break;
	case 2:relational();
	       break;
	default:printf("Invalid nummber:");
	        break;       
    }
	return 0;
}
