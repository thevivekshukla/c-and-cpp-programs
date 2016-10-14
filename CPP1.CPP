#include<iostream.h>
#include<conio.h>

class fact
{
   private:
	long int n;
   public:
	void accept();
	void factorial();
	void show(long int j);
};


int main()
{
   fact f;
   clrscr();
   f.accept();
   getch();
   return 0;
}


void fact:: accept()
{
   cout<<"\nEnter no:\t";
   cin>>n;
   if(n<0)
      cout<<"\nPlease do not enter negative no.";
   else
      factorial();
}



void fact:: factorial()
{
   int i, j=n;
   for(i=n-1; i>0; i--)
   {
   j = j * i;
   }
   show(j);
}
void fact :: show(long int j)
{
   cout<<"\nFactorial is:\t"<<j;
}