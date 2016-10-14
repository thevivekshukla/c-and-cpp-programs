#include<stdio.h>
#include<conio.h>
void main()
{
	float km, m, in, ft, cm;
	clrscr();
	printf("Enter the distance in km:\t");
	scanf("%f",&km);
	m=km*1000.0;
	cm=m*100.0;
	in=cm*2.54;
	ft=in/12.0;
	printf("\nIn meter:\t%f m",m);
	printf("\nIn centimere:\t%f cm",cm);
	printf("\nIn inces:\t%f inch",in);
	printf("\nIn feets:\t%f feet",ft);
	getch();
}