#include<stdio.h>
#include<conio.h>
void main()
{
	int m;
	clrscr();
	printf("Enter your marks:\t");
	scanf("%d",&m);
	if(m>=40 && m<=55)
	printf("\nYou got D division");

	if(m>=56 && m<=70)

	printf("\nYou got C division");

	if(m>=71 && m<=85)

	printf("\nYou got B division");

	if(m>=86 && m<=99)

	printf("\nYou got A division");

	if(m>=0 && m<=39)

	printf("\nYou have failed");

	if(m<0 && m>100)
	printf("Invalid input");

	getch();
}
