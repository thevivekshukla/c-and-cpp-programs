#include<iostream.h>
#include<conio.h>

class CDummy
{
   public:
	static int n;
	CDummy()
	{
	   n++;
	};
	~CDummy()
	{
	   n--;
	};
};
	int CDummy::n = 0;


int main()
{
   clrscr();
   CDummy a;
   CDummy b[5];
   CDummy *c = new CDummy;
   cout<<a.n<<endl;
   delete c;
   cout<<CDummy::n<<endl;
   getch();
   return 0;
}
