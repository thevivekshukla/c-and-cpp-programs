#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
	{
	  int x,y,xm,ym;
	  int gdriver,gmode;
	  gdriver=DETECT;
	  initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	  xm=getmaxx();
	  ym=getmaxy();
	  printf("Enter X-coordinate of point:");
	  scanf("%d",&x);
	  printf("Enter Y-coordinate of point:");
	  scanf("%d",&y);
	  putpixel(xm/2+x,ym/2-y,2);
	  getch();
	}