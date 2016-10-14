#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
	{
	 struct det
	   {
	    char name[20];
	    char add[50];
	    char mob[11];
	   }d;
	 struct node *l;
	};
	
	
void linkfloat();
void insert(struct node **s);
void show(struct node *s);


void main()
	{
	 struct node *s;
	 char ch;

	 clrscr();
	 s=NULL;
	 do{
	  insert(&s);
	  printf("\ncontinue..??(y/n):\t");
	  fflush(stdin);
	  ch=getche();
	 }while(ch=='y'||ch=='Y');
	  
	 clrscr();
	 printf("\noutput:\n\n");
	 show(s);
	 linkfloat();
	 getch();

	}


void linkfloat()
{
	float a, *b;
	a = 0.5;
	b = &a;
}

void insert(struct node **s)
{
 struct node *p;
 p=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter name:");
 gets(p->d.name);
 printf("\nEnter address:");
 gets(p->d.add);
 printf("\nEnter mobile no.:");
 gets(p->d.mob);
 p->l=NULL;
 if(*s==NULL)
    *s=p;
 else
    {
     p->l=*s;
     *s=p;
    }
}

void show(struct node *s)
{
  while(s!=NULL)
   {
    printf("\nNAME:%s",s->d.name);
    printf("\nADD.:%s",s->d.add);
    printf("\nMOBILE NO:%s",s->d.mob);
    s=s->l;
   }
}
