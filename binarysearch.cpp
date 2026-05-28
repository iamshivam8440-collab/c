#include<stdio.h>
int binary(int arr[10]);
int binary(int arr[10])
{
 for(int i=0;i<10;i++)
  {
  	if(arr[i]==0)
  	return i;
  	else
  	i;
  }
    return -1;

}
int main()
{
  int arr[10]={1,3,2,6,4,5,9,7,8,0};
  int r=binary(arr);
  if(r==-1)
  {
  	printf("Number is not found:");
  }
  else
  {
  	printf("Number is found:");
  }
  return 0;	
}
