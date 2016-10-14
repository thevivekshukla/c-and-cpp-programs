#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5], i, t, j;
	clrscr();
	printf("\nEnter elements into array.\t");
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\nElements into array are:\t");
	for(i=0; i<5; i++)
	{
		printf("%d\t",arr[i]);
	}

	for(j=0; j<4; j++)
	{
		for(i=0; i<4; i++)
		{
			if(arr[i] > arr[i+1])
			{
				t = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = t;
			}
		}
	}

	printf("\nSorted elements:\t");
	for(i=0; i<5; i++)
		printf("%d\t",arr[i]);

	getch();
}