#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *p;
  p=(int*)calloc(10,sizeof(int));
  for(int i=0;i<5;i++)
  {
  	printf("arr[%d]=%d\n",i,p[i]);
  }
  int *q;
  q=(int*)malloc(sizeof(int));
  scanf("%d",&q);
  printf("%d",q);
  return 0;
}
