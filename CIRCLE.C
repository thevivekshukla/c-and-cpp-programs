#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
    void main()
    {  int gd=DETECT,gm,xm,ym,xc,yc,x,y,di,r;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("enter the value of xc:\t");
	scanf("%d",&xc);
	printf("enter the value of yc:\t");
	scanf("%d",&yc);
	printf("enter the radius of circle:\t");
	scanf("%d",&r);
xm=getmaxx()/2;
ym=getmaxy()/2;

line(xm,0,xm,2*ym);
line(0,ym,2*xm,ym);

	 x=0;
	 y=r;

	 di=3-(2*r);
	 putpixel(xm+x,ym-y,1);
	 for(x=0;x<=y;x++)
	 {
	 putpixel(xm+xc+x,ym-(yc+y),1);
	 putpixel(xm+xc+y,ym-(yc+x),2);
	 putpixel(xm+xc+y,ym-(yc-x),3);
	 putpixel(xm+xc+x,ym-(yc-y),4);
	 putpixel(xm+xc-x,ym-(yc-y),5);
	 putpixel(xm+xc-y,ym-(yc-x),6);
	 putpixel(xm+xc-y,ym-(yc+x),7);
	 putpixel(xm+xc-x,ym-(yc+y),8);
	 if(di<0)
	 {

	 di=(di+(4*x)+6);
	 }
	 else
	 {
	 y=y-1;
	 di=di+((4*(x-y)+10));
	 }
	 putpixel(xm+xc,ym-yc,3);

	 }
	 getch();

    }