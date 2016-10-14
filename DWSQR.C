#include<stdio.h>
#include<conio.h>
void main()
{
	char ans;
	int n;
	clrscr();
	do
	{
	printf("Enter the no:\t");
	scanf("%d",&n);
	printf("\nThe square of %d is %d",n, n*n);
	printf("\nDo you want to enter another no y/n");
	scanf("%c",&ans);
	}while(ans=='y');
	getch();


}