// Program to swap value without using any third variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b;
	clrscr();
	printf("Enter the value of a:\t");
	scanf("%d",&a);
	printf("\nEnter the value of b:\t");
	scanf("%d",&b);
	printf("\nEntered values are:\n\na=%d \n\nb=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\nAfter swaping:\n\na=%d \n\nb=%d",a,b);
	getch();
}
