#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,g;
	clrscr();
	printf("Enter three no:\t");
	scanf("%d %d %d %d",&a,&b,&c);
	g=(a>=b && a>=c && a>=d)?a:(b>c && b>d)?b:(c>d)?c:d;
	printf("greatest no is %d",g);
	getch();
}