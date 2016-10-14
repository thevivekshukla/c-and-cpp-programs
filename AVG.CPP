#include<iostream.h>
#include <conio.h>


class avg
{
   private:

   int a, b, d;
   float c;

   public:

   avg()
   {
      a=b=d=0;
      c=0;
   }


   ~avg()
   {
      a=b=d=0;
      c=0;
   }

   void display()
   {
      cout<<"Average is: "<<c;
   }


   int average()
   {
      c = (float)(a + b + d)/3;
   }


   void accept()
   {
      cout<<"Enter first no:\t";
      cin>>a;
      cout<<"Enter second no:\t";
      cin>>b;
      cout<<"Enter third no:\t";
      cin>>d;
   }

};





void main()
{

   avg *a;
   a=new avg;
   clrscr();
   a->accept();
   a->average();
   a->display();
   delete a;
 //  a->display();
   getch();
}