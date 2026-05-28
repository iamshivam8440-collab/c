#include<stdio.h>
struct student{
	char name[30];
	int age;
	float hight;
};
void str(struct student s);
void str(struct student s)
{
  printf("Your name is:%s\n",s.name);
  printf("Your age is:%d\n",s.age);
  printf("Your hight is:%.2f\n",s.hight);
}
int main()
{
  struct student s1;
  printf("Enter your name:");
  gets(s1.name);
  printf("Enter your age:");
  scanf("%d",&s1.age);
  printf("Enter your hight:");
  scanf("%f",&s1.hight);
  str(s1);
  return 0;	
}
