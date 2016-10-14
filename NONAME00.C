#include<stdio.h>
#include<conio.h>
void main()
{
int arr[3][3],i,j;
clrscr();
printf("\nEnter row and column:\t");
for(i=1;i<=3;i++)
{

	for(j=1;j<=3;j++)
	{
	scanf("%d",&arr[i][j]);
	}
}
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
	printf("%d\t",arr[i][j]);
	}
	printf("\n");
}
getch();
}