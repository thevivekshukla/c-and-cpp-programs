#include<stdio.h>
int i=0;
void val();
void main()
{
clrscr();
	printf("\nmain's i=%d\n",i);
	i++;
	val();
	printf("\nmain's i=%d\n",i);
	val();
	getch();
}

void val()
{
i=100;
printf("\nval's i=%d\n",i);
i++;
}