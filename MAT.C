#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	int mat[3][3];
	clrscr();
	/*printf("\nEnter the no of row:");
	scanf("%d",&i);
	printf("\nEnter the no of column:");
	scanf("%d",&j);
	*/

	for(i=0;i<=2;i++)
	{
		printf("\nEnter the 3 elements of the row");
		scanf("%d %d %d",&mat[i][0],&mat[i][1],&mat[i][2]);

	}
	printf("\nThe matrix is:");
	for(i=0;i<=2;i++)
	{

	printf("\n%d %d %d",mat[i][0],mat[i][1],mat[i][2]);
	}

	getch();
}