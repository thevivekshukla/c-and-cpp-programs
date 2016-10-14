#include<stdio.h>
#include<conio.h>
void accept();
//void display(char *);
void sort(char &, int n);


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
		printf("\nEnter name %d:\t",i+1);
		scanf("%s",names[i]);
	}
		sort(names, 5);

	for(i=0; i<5; i++)
		printf("\n%s",*(names+i));


}

/* void display(char *p)
{
	int i;

	for(i=0; i<5; i++)
		printf("\n%s",*(p+i));
}
*/


void sort(char &ch, int n)
{
	int t,j,i;
	for(j=0; j<10; j++)
	{
		for(i=0; i<9; i++)
		{
			if(*(ch+i+1) > *(p+i))
			{
				t = *(p+i);
				*(p+i) = *(p+i+1);
				*(p+i+1)=t;
			}
		}
	}

}