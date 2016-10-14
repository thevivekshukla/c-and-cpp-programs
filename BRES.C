#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
	int gd,gm,xm,ym, x,y,xs,ys,xe,ye,dx,dy,d;
	//float slope;
	clrscr();
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	printf("Enter xs:\t");
	scanf("%d",&xs);
	printf("Enter ys:\t");
	scanf("%d",&ys);
	printf("Enter xe:\t");
	scanf("%d",&xe);
	printf("Enter ye:\t");
	scanf("%d",&ye);

	dx=xe-xs;
	dy=ye-ys;

	//slope=dy/dx;
	x=xs;
	y=ys;


	xm=getmaxx()/2;
	ym=getmaxy()/2;

	line(xm,0,xm,2*ym);
	line(0,ym,2*xm,ym);

		putpixel(xm+x,ym-y,4);




	//printf("Slope is %f",slope);

	if(abs(dx)>=abs(dy))
	{
	d=2*dy-dx;
	while(x<=xe)
	{
	if(d<0)
	d=d+2*dy;

	else
	{
	d=d+2*(dy-dx);
	y=y+1;
	}
	x=x+1;
	putpixel(xm+x,ym-y,4);
	}
	}
	else

	{
	d=2*dx-dy;
	 while(y<ye)
	 {
	 if(d<0)
	 d=d+2*dx;

	 else
	 {
	 d=d+2*(dx-dy);
	 x=x+1;
	 }
	 y=y+1;
	 putpixel(xm+x,ym-y,2);
	 }
	 }


	getch();
	}