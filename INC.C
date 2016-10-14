#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5, j, k, l;
	clrscr();
	i=++i;
	printf("%d",i);
	j=++i;
	printf("\n%d",j);
	k=i++;
	printf("\n%d",k);
	l=i++;
	printf("\n%d",l);
	getch();

}