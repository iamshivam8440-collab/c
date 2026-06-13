#include<stdio.h>
#include<string.h>
typedef struct std {
	char name[20];
	int rollno;
	char course[5];
}S;
void show(struct std s);
void show(struct std s)
{
	printf("Name is:%s\n",s.name);
	printf("Roll no. is:%d\n",s.rollno);
	printf("Course is:%s\n",s.course);
}
int main()
{
	S s1;
	S *ptr;
	ptr=&s1;
	strcpy(ptr->name,"Shivam");
	ptr->rollno=55;
	strcpy(ptr->course,"BCA");
	show(s1);
	return 0;
}

