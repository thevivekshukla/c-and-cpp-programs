#include<iostream.h>
#include<conio.h>
class CRectangle
{
   int width, height;
   public:
      void set_values(int,int);
      int area()
      {
	 return (width * height);
      }
      friend CRectangle duplicate(CRectangle);

};

void CRectangle :: set_values(int a, int b)
{
   width = a;
   height = b;
}
CRectangle duplicate (CRectangle rectparam)
{
   CRectangle rectres;
   rectres.width = rectparam.width*2;
   rectres.height = rectparam.height*2;
   return(rectres);
}

int main()
{
   clrscr();
   CRectangle rect, rectb;
   rect.set_values(2,3);
   rectb = duplicate(rect);
   cout<<rectb.area();
   getch();
   return 0;
}