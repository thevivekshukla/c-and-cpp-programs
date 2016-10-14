#include<stdio.h>
#include<conio.h>
void main()
{
float da, hra, bsal,gsal;
clrscr();

printf("\nEnter the Basic Salary:\t");
scanf("%f",&bsal);
//printf("\nEnter the House Rent Allowance:\t");
//scanf("%f",&hra);

da=0.4*bsal;
hra=0.2*bsal;

gsal=da+hra+bsal;
printf("\nGross salary is:\t%f",gsal);



getch();
}