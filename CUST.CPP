#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class person
{
   protected:
	   char  name[30], sex[10];
   public:
	person();
	~person();
	void accept();
	void display();
};

class customer : public person
{
   private:
	int custcode;
	float amt;
	float amtFinal;
	char phone[10];
   public:
	customer();
	~customer();
	void accept();
	void calculate();
	void display();

};

class dealer : public person
{
private:

   int dealercode;
   char shop_add[100];
   int quant;
   char d_phone[10];

public:

   void accept();
   void display();
   dealer();
   ~dealer();
};



void main()
{
   customer c;
   new customer;
   dealer d[3];
   new customer;
   clrscr();
   c.accept();
   for(int i=0; i<3; i++)
   {
   cout<<"Enter dealer "<<i+1<<" details: ";
   d[i].accept();
   }
   cout<<endl;
   cout<<"<---------------------Invoice----------------------------->"<<endl;
   //p.display();
   c.calculate();
   cout<<endl;
   cout<<"<-----------------Dealer's Information-------------------->"<<endl;
   for(i=0; i<3; i++)
   {
   cout<<"Dealer "<<i+1<<" details:::::::"<<endl;
   d[i].display();
   }

   getch();
}

person::person()
{
   name[30] = NULL;
   sex[10] = NULL;
}

person::~person()
{
   name[30] = NULL;
   sex[10] = NULL;
}

customer::customer()
{
   amt = 0;
   amtFinal = 0;
}

customer :: ~customer()
{
   amt = 0;
   amtFinal = 0;
}

dealer :: dealer()
{
   dealercode = 0;
   shop_add[100] = NULL;
   quant = 0;
   d_phone[10] = NULL;
}

dealer :: ~dealer()
{
   dealercode = 0;
   shop_add[100] = NULL;
   quant = 0;
   d_phone[10] = NULL;
}



void person :: accept()
{
   cout<<"Enter details:- "<<endl<<endl;
   cout<<"Name: ";
   gets(name);
   cout<<"Sex(M/F): ";
   cin>>sex;
}

void person ::display()
{
   cout<<"Name of person: "<<name<<endl;
   cout<<"Sex: "<<sex<<endl;
}

void customer :: accept()
{
   person::accept();
   cout<<"Customer id: ";
   cin>>custcode;
   cout<<"Phone no: ";
   cin>>phone;
   cout<<"Enter amount: ";
   cin>>amt;
   cout<<endl;
}

void customer :: display()
{
   cout<<"Custcode: "<<custcode<<endl;
   person :: display();
   cout<<"Phone no: "<<phone<<endl;
   cout<<"Amount Outstanding: "<<amt<<endl;
   cout<<"Final amount: "<<amtFinal<<endl;
}

void customer :: calculate()
{
   if(amt>0 && amt<=500)
      amtFinal = amt;
   else if (amt >= 501 && amt<= 2000)
      amtFinal = amt * 0.95;
   else if (amt > 2000)
      amtFinal = amt * 0.93;
   person::display();
   display();
}


void dealer :: accept()
{
   cout<<"Enter dealer code: ";
   cin>>dealercode;
   cout<<"Enter dealer name: ";
   cin.ignore();
   cin.getline(name,49);
   cout<<"Enter dealer's shop address: ";
   gets(shop_add);
   cout<<"Enter dealer's phone no: ";
   cin>>d_phone;
   cout<<"Enter no of items sold: ";
   cin>>quant;
}


void dealer :: display()
{
   cout<<"Dealer code: "<<dealercode<<endl;
   cout<<"Dealer's name: "<<name<<endl;
   cout<<"Dealer's shop address: "<<shop_add<<endl;
   cout<<"Dealer's phone no: "<<d_phone<<endl;
   cout<<"No of items sold: "<<quant<<endl<<endl;
}