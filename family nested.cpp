#include<stdio.h>
struct Gfamily{
	char grandfather[30];
	char grandmother[30];
};
struct Pfamily{
	char father[40];
	char mother[40];
	struct Gfamily GF;
};
struct Sfamily{
	char self[40];
	char sister[30];
	char Sister[30];
	struct Pfamily PF;
};
int main()
{
	struct Sfamily SF;
	printf("Enter the grandfather name:");
	gets(SF.PF.GF.grandfather);
	printf("Enter the grandmother name:");
	gets(SF.PF.GF.grandmother);
	printf("Enter the father name:");
	gets(SF.PF.father);
	printf("Enter the mother name:");
	gets(SF.PF.mother);
	printf("Enter the self name:");
	gets(SF.self);
	printf("Enter the sister name:");
	gets(SF.sister);
	gets(SF.Sister);
	printf("Grandfather is:%s\nGrandmother is:%s\nFather is:%s\nMother is:%s\nSelf is:%s\nsister is:%s\t%s\n",SF.PF.GF.grandfather,SF.PF.GF.grandmother,SF.PF.father,SF.PF.mother,SF.self,SF.sister,SF.Sister);
	return 0;
}


