#include<stdio.h>
int main()
{
	FILE *ptr;
	int i,x=1;
	ptr=fopen("Clanguage.txt","w");
	while(x!=11)
	{
      fprintf(ptr,"Let's learn table for %d:\n",x);
   	 for(i=1;i<11;i++)
	  {
	   	fprintf(ptr,"%d * %d=%d\n",x,i,i*x);
	  }
	 x++; 
	 printf(ptr,"\n\n");
    }
	fclose(ptr);
	return 0;
}
