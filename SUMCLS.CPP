#include<iostream.h>
#include <conio.h>


class sumno
{
   int a, b;


   void display(int c)
   {
      cout<<"Sum is: "<<c;
   }


   int sum(int x, int y)
   {
      int c;
      c = x + y;
      display(c);
   }


   void accept()
   {
      int a, b, c;
      cout<<"Enter first no:\t";
      cin>>a;
      cout<<"Enter second no:\t";
      cin>>b;
      sum(a, b);
}





void main()
{
   clrscr();
   accept();
   getch();
}