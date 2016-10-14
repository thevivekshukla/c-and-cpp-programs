#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter any no:\t");
	scanf("%d",&n);
	if(n==1)
	printf("\nyou have entered 1");
	else
	{
	if(n==2)
	printf("\nYou have entered 2");
	else
	printf("\nYou have entered no other than 1 and 2");
	}
	getch();
}