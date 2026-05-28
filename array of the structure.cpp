#include<stdio.h>
struct student {
  char name[30];
  int roll;
  int marks[5];
};
int main()
{
 int i,j;
 struct student s[3];
 for(j=1;j<3;j++)
 {
  printf("Enter student s%d name:",j);
  gets(s[j].name);
 }
 for(j=1;j<3;j++)
 {
  printf("Enter the roll number student s%d:",j);
  scanf("%d",&s[j].roll);
 }
 for(j=1;j<3;j++)
 {
   printf("Enter the 5 subject marks for student s%d:",j);	
   for(i=0;i<5;i++)
   {
   	scanf("%d",&s[j].marks[i]);
   }
   printf("\n");
 }
 for(j=1;j<3;j++)
 {
  printf("Student s%d name is:%s\n",j,s[j].name);	
 }
 for(j=1;j<3;j++)
 {
  printf("Student s%d roll number is:%d\n",j,s[j].roll);
 }
 for(j=1;j<3;j++)
 {
  printf("Student s%d marks is:",j);	
  for(i=0;i<5;i++)
  {
  	printf("%d\t",s[j].marks[i]);
  }
  printf("\n");
 }
  int sum[3];
 for(j=1;j<3;j++)
 { 
    sum[j]=0;
   for(i=0;i<5;i++)
   {
   	sum[j]+=s[j].marks[i];
   }
   printf("\n");
 }
 for(j=1;j<3;j++)
 {
   printf("Total number of marks of student s%d:%d\n",j,sum[j]);
 }
 return 0;
}

