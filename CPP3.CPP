#include<iostream.h>
#include <conio.h>

class vector
{
   public:
	int p, q;
	vector(){};

	vector operator + (vector);

	vector (int, int);
};

vector:: vector (int x, int y)
{
	 p = x;
	 q = y;
}

vector vector :: operator + (vector para)
{
	vector t;
	t.p = p + para.p;
	t.q = q + para.q;
	return (t);
}

int main()
{
	clrscr();
	vector x(10, 5);
	vector y(7,8);
	vector c;
	c = x + y;
	cout <<c.p<<","<<c.q;
	getch();
	return 0;
}

