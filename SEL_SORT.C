#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5], i, j, t;
	clrscr();

	printf("\nEnter elements into array.\t");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\nEntered array is:\t");
	for(i=0; i<5; i++)
	{
		printf("%d\t",a[i]);
	}

	for(i=1; i<5; i++)
	{
		for(j=0; j<4; j++)
		{
			if(a[i]<a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	printf("\nSorted array is:\t");
	for(i=0; i<5; i++)
	{
		printf("%d\t",a[i]);
	}

	getch();
}