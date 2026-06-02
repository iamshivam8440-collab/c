#include<stdio.h>
void arrinput();
void stroutput(char *ptr);
void arrdisplay(int *p,int n);
void strinput();
void stroutput(char *ptr){
	printf("Name is:");
	puts(ptr);
}
void strinput(){
	char name[30];
	printf("\nEnter your name is:");
	scanf("%s",name);
	stroutput(name);
}
void arrdisplay(int *p,int n)
{
	int i;
    printf("Array is:");
    for(i=0;i<n;i++)
    {
    	printf("%d ",*(p+i));
	}
	
}
void arrinput(){
	int i,n;
	int arr[10];
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("Enter the nuumber at %d index:",i);
	scanf("%d",&arr[i]);
    }
    arrdisplay(arr,n);
}
int main()
{
    arrinput();
    strinput();
	return 0;
}
