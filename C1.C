#include<stdio.h>
#include<conio.h>

int no[10];
int i;

void accept();
void sort();
void display();

int main()
{
   clrscr();
   accept();
   sort();
   display();
   getch();
   return 0;
}


void accept()
{
   printf("Enter 10 numbers:\n");
   for(i=0; i<10; i++)
   {
      printf("Enter %d no:\t",i+1);
      scanf("%d",&no[i]);
   }
}

void sort()
{
   int j, temp;
   for(j=0; j<10; j++)
   {
      for(i=0; i<9; i++)
      {
	 if( no[i+1] > no[i] )
	 {
	    temp = no[i+1];
	    no[i+1] = no[i];
	    no[i] = temp;
	 }
      }
   }
}


void display()
{
   printf("\nSorted non-zero numbers are:");
   for(i=0; i<10; i++)
   {
      if(no[i] != 0)
	 printf("\n%d",no[i]);
   }
}