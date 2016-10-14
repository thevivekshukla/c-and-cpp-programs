#include <stdio.h>
#include <conio.h>
void accept();
void sort(char &);
void show();

void main()
{
	clrscr();
	accept();
	getch();
}

void accept()
{
	char names[5][30];
	int i;
	for(i=0; i<5; i++)
	{
		printf("\nEnter the name %d:\t",i+1);
		scanf("%s",&names[i]);
	}

	for(i=0; i<5; i++)
	{
		printf("\n%s",names[i]);
	}

	sort(names[0], names[1], names[2], names[3], names[4]);
}


void sort(char n1[30],)