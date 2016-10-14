#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void main()
{
int xm,ym,step,i,gd,gm;
float f,xs,ys,xe,ye,dy,dx,x,y,xi,yi;
clrscr();
gd=DETECT;
initgraph(&gd,&gm,"c:\\TC\\BGI");
printf("Enter xs:");
scanf("%f",&xs);
printf("Enter ys:");
scanf("%f",&ys);
printf("Enter xe:");
scanf("%f",&xe);
printf("Enter ye:");
scanf("%f",&ye);
xm=getmaxx();
ym=getmaxy();

dx=xe-xs;
dy=ye-ys;
f=dy/dx;
line(0,ym/2,xm,ym/2);
line(xm/2,0,xm/2,ym);

{
if(abs(dx)>=abs(dy))
	step=abs(dx);
else
	step=abs(dy);
}
		xi=dx/step;
		yi=dy/step;
			printf("slope %f",f);
		x=xs;
		y=ys;
		putpixel(ceil(xm/2+x),ceil(ym/2-y),4);
	for(i=1;i<=step;i++)
	{
	x=x+xi;
	y=y+yi;
	putpixel(ceil(xm/2+x),ceil(ym/2-y),4);
	 }
getch();
}