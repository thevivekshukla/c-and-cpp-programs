#include<stdio.h>
void main()
{
	int n,l=1,k;
	clrscr();
	printf("Enter the no:\t");
	scanf("%d",&n);
	while(l<=10)
	{
	 k=n*l;
	 printf("\n%d\*%d\=%d",n,l,k);
	 l++;

	}
	getch();
	}