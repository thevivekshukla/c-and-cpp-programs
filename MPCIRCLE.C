#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,xc,yc,x,y,r,xm,ym,d;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("Enter the xc:\t");
	scanf("%d",&xc);
	printf("Enter the yc:\t");
	scanf("%d",&yc);
	printf("Enter the radius:\t");
	scanf("%d",&r);

	xm=getmaxx()/2;
	ym=getmaxy()/2;

	line(xm,0,xm,2*ym);
	line(0,ym,2*xm,ym);

	x=0;
	y=r;

	d=1-r;


	for(x=0;x<=y;x++)
	{
	putpixel(xm+xc+x,ym-(yc+y),8);
	putpixel(xm+xc+y,ym-(yc+x),7);
	putpixel(xm+xc+y,ym-(yc-x),6);
	putpixel(xm+xc+x,ym-(yc-y),5);
	putpixel(xm+xc-x,ym-(yc-y),4);
	putpixel(xm+xc-y,ym-(yc-x),3);
	putpixel(xm+xc-y,ym-(yc+x),2);
	putpixel(xm+xc-x,ym-(yc+y),1);


	if(d<0)
	{
	d=d+2*x+3;
	}
	else
	{
	d=d+2*(x-y)+5;
	y=y-1;

	}
	putpixel(xm+xc,ym-yc,6);
	}
	getch();
}