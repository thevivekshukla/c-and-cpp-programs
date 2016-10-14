#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,s4,s5,t;
	float per,agg;
	clrscr();
	printf("Enter the marks of the given subject:");
	printf("\nMathematics:\t");
	scanf("%d",&s1);
	printf("\nPhysics:\t");
	scanf("%d",&s2);
	printf("\nChemistry:\t");
	scanf("%d",&s3);
	printf("\nBiology:\t");
	scanf("%d",&s4);
	printf("\nProblem Solving:\t");
	scanf("%d",&s5);
	t=s1+s2+s3+s4+s5;
	printf("\nThe total marks obtained is:\t%d",t);
	agg=t/5;
	printf("\nThe aggregate marks:\t%f",agg);
	per=t/5;
	printf("\nThe percentage obtained is:\t%f%",per);
	getch();
}