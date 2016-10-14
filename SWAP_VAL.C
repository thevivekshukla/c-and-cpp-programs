#include <stdio.h>
#include <conio.h>
void swap(long int a,long int b);

void main()
{
	long int x, y;
	clrscr();
	printf("\nEnter value of x:\t");
	scanf("%ld",&x);
	printf("\nEnter value of y:\t");
	scanf("%ld",&y);
	swap(x, y);
	printf("\n\nx=%ld and y=%ld",x,y);
	getch();
}

void swap(long int a,long int b)
{
	long int t;
	t = a;
	a = b;
	b = t;
	printf("\nx=%ld",a);
	printf("\ny=%ld",b);
}