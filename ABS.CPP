#include <iostream.h>
#include <conio.h>
#include <stdio.h>

class shape
{
public:
	virtual void calcCArea(int rad) = 0;
	virtual void calcRPeri(int l, int b) = 0;
};

class Circle : public shape
{
virtual void calcCArea(int rad)
{
float area = 3.142*rad*rad;
cout<<"Area of circle:\t"<<area<<endl;
}

virtual void calcRPeri(int l, int b)
{}

};

class rectangle : public shape
{
virtual void calcRPeri(int l, int b)
{
float peri = 2*(l+b);
cout<<"Perimeter of rectangle:\t"<<peri<<endl;
}

virtual void calcCArea(int rad)
{}
};

void main()
{
clrscr();
int r;
int c;
char ch;

do{
cout<<"Enter your choice:"<<endl;
cout<<"1.Area of Circle\t 2. Parameter of rectangle"<<endl;
cin>>c;
switch(c)
{
case 1:
	cout<<"Enter raius of circle:\t";
	cin>>r;
	shape *shp;
	shp = new Circle;
	shp -> calcCArea(r);
	delete shp;
	break;

case 2:
	int len, brd;
	shape *shp1;
	cout<<"Enter length of rectangle:\t";
	cin>>len;
	cout<<"Enter breadth of rectangle:\t";
	cin>>brd;
	shp1 = new rectangle;
	shp1 -> calcRPeri(len, brd);
	delete shp1;
	break;

default:
	cout<<"Invalid input";
}
fflush(stdin);
cout<<"Do you want to continue(y/n)"<<endl;
cin>>ch;
}while(ch == 'y' || ch == 'Y');
}