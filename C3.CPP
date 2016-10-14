#include<stdio.h>
#include<conio.h>

#define MAX(x, y, z) ( (x>y && x>z)?x:(y>z)?y:z )

int n1, n2, n3, g;

void accept();
void max();
void display();

int main()
{
   clrscr();
   accept();
   max();
   display();
   getch();
   return 0;
}


void accept()
{
   printf("\nEnter 1st no:\t");
   scanf("%d",&n1);
   printf("\nEnter 2nd no:\t");
   scanf("%d",&n2);
   printf("\nEnter 3rd no:\t");
   scanf("%d",&n3);
}

void max()
{
   g = MAX(n1, n2, n3);
}

void display()
{
   printf("\nGreates no is %d.",g);
}