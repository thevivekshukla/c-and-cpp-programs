#include<stdio.h>
#include<conio.h>
void main()
{
	float dist, m, ft, in, cm;
	clrscr();

	printf("Enter the distance between two cities(in km):\t");
	scanf("%f",&dist);

	m=dist*1000;
	cm=m*100;
	in=cm*2.56;
	ft=in/12;

	printf("\nDistance in meter:\t%f m",m);
	printf("\nDistance in centimeter:\t%f cm",cm);
	printf("\nDistance in feet:\t%f feet",ft);
	printf("\nDistance in inch:\t%f inch",in);

	getch();
}