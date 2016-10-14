#include<stdio.h>
#include<conio.h>
int calsum(int x, int y, int z);
void main()
{
	int a, b, c, sum;
	clrscr();
	printf("Enter 3 no:");
	scanf("%d %d %d",&a,&b,&c);
	sum=calsum(a, b, c);
	printf("\nThe sum is:\ %d",sum);
	getch();
}

calsum(int x, int y, int z)
{
	int d;
	d=x+y+z;
	return(d);
}