/*Program to swap two values of variable using third */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	clrscr();
	printf("Enter the value of n:\t");
	scanf("%d",&n);
	printf("Enter the value of i:\t");
	scanf("%d",&i);
	printf("Entered value of n and i are %d and %d respectively",n,i);
	j=n;
	n=i;
	i=j;
	printf("\nAfter swapin n=%d and i=%d",n,i);

	getch();
}