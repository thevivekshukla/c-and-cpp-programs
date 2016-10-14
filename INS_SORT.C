#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5], i, j, t, k;
	clrscr();

	printf("\nEnter elements into array.\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nElements in array:\t");
	for(i=0; i<5; i++)
		printf("%d\t",arr[i]);

	for(j=0; j<4; j++)
	{
		for(i=1; i<5; i++)
		{
			for(k=0; k<i; k++)
			{
				if(arr[i] < arr[k])
				{
					t = arr[i];
					arr[i] = arr[k];
					arr[k] = t;
				}
			}
		}
	}

	printf("\nSorted elements in array:\t");
	for(i=0; i<5; i++)
	{
		printf("%d\t",arr[i]);
	}
	getch();
}