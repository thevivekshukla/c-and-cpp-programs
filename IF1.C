#include<stdio.h>
#include<conio.h>
void main()
{
	float bsal, hra, da, gsal;
	clrscr();
	printf("Enter the basic salary of the employee:\t");
	scanf("%f",&bsal);
	if(bsal<1500)
	{
	hra=bsal*10/100;
	da=bsal*90/100;
	}
	if(bsal>=1500)
	{
	hra=500;
	da=bsal*98/100;
	}
	gsal=hra+da+bsal;
	printf("\nThe gross sal is %f.",gsal);
	getch();
}