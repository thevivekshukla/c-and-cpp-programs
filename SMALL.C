#include<stdio.h>
#include <conio.h>
void main()
{

    int n, a=0, b=0, c=0, d=0, e=0, f=0;

    clrscr();
    printf("Enter amount:\t");
    scanf("%d",&n);

    if(n / 100 != 0)
    {
	a = n / 100;
	n = n-(a*100);
    }

    if(n / 50 != 0)
    {
	b = n / 50;
	n = n-(b*50);
    }

    if(n / 10 != 0)
    {
	c = n / 10;
	n = n-(c*10);
    }

    if(n / 5 != 0)
    {
	d = n / 5;
	n = n-(d*5);
    }

    if(n / 2 != 0)
    {
	e = n / 2;
	n = n-(e*2);
    }

    if(n / 1 != 0)
    {
	f = n / 1;
	n = n-(f*1);
    }

    n = a+b+c+d+e+f;

    printf("\nSmallest possible combination of 1 or 2 or 5 or 10 or 50 or 100 will be:\t%d",n);
    getch();
}
