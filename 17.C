#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	float sp, prof, prc;
	clrscr();
	printf("\nEnter the no of items:\t");
	scanf("%d",&n);

	printf("\nEnter the total selling price:\t");
	scanf("%f",&sp);

	printf("\nEnter the total profit:\t");
	scanf("%f",&prof);

	prc=(sp-prof)/n;

	printf("\nCost price of one item is %f",prc);

	getch();
}