#include<stdio.h>
#include<conio.h>

#define MACRO(x) x*x
#define MAX(a,b) (a>b)?a:b

int main()
{
   int a, b, c, d;
   clrscr();
   printf("\nEnter first no:\t");
   scanf("%d",&a);
   printf("\nEnter second no:\t");
   scanf("%d",&b);
   c = MAX(a,b);
   printf("\nGreates no is:\t%d",c);

   #ifdef MACRO
      printf("\nMacro is defined.");
   #endif

   printf("\nEnter the no to find its square:\t");
   scanf("%d",&d);
   c = MACRO(d);

   printf("\nSquare of %d is %d.",d,c);
   getch();
   return 0;

}