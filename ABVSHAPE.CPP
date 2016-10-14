#include<iostream>
#include<conio.h>

class shape
 {
  public:
	virtual void area(int)=0;
	virtual void para(int,int)=0;
};

class circle : public shape
 {
    int r;
 public:
     void get();
     void area(int r)
       {
	std::cout<<"\nArea of Circle with radius /'"<<r<<"/' is:"<<(3.14*r*r);
      }

 };


class rectangle :public shape
{
  int l,b;
 public:
    void get();
    void para(int l,int b)
       {
	  std::cout<<"\nParameter of rectangle with length /'"<<l<<"/'1 & breadth /'"<<b<<"/'is:"<<(2*(l+b));
       }

};



int main()
{
//clrscr();
int r, l, b;
circle *c;
rectangle *rec;


//c->get();
c->get();

rec->get();

return 0;
//getch();
}

void circle::get()
{
std::cout<<"\nEnter the radius of a circle:";
std::cin>>r;
area(r);
}

void rectangle :: get()
{
std::cout<<"\n\nEnter the length & breadth of a rectangle:";
std::cin>>l>>b;
para(l,b);
}
