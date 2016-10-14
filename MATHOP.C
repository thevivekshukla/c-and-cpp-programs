#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c, choice;
	clrscr();
	printf("Enter the value of a:\t");
	scanf("%d",&a);
	printf("\nEnter the value of b:\t");
	scanf("%d",&b);

	printf("\nEnter 1 for addition");
	printf("\nEnter 2 for subtraction");
	printf("\nEnter 3 for multiplication");
	printf("\nEnter 4 for division\n\t");
	scanf("%d",&choice);

	switch(choice)
	{
	case 1:
	c=a+b;
	printf("\nAddition of a and b is:\t%d",c);
	break;
	case 2:
	c=a-b;
	printf("\nSubtraction of a and  b is:\t%d",c);
	break;
	case 3:
	c=a*b;
	printf("\nMultiplication of a and b is:\t%d",c);
	break;
	case 4:
	c=a/b;
	printf("\nDivision of a and b is:\t%d",c);
	break;

	default:
	printf("\nInvalid input");
	}
	getch();
}