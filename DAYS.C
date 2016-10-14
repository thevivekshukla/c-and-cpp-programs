#include<stdio.h>
#include<conio.h>
void main()
{
	int days;
	clrscr();
	printf("enter the no day:\t");
	scanf("%d",&days);
	switch(days)
	{
	case 1:
	printf("Its Monday");
	break;
	case 2:
	printf("Its Tuesday");
	break;
	case 3:
	printf("Its Wednesday");
	break;
	case 4:
	printf("Its Thurday");
	break;
	case 5:
	printf("Its Friday");
	break;
	case 6:
	printf("Its Saturday");
	break;
	case 7:
	printf("Its Sunday");
	break;

	default:
	printf("Invalid input");
	}
	getch();
}