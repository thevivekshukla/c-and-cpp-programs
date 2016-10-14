#include<stdio.h>
#include<conio.h>
//#include<alloc.h>
struct Node
	{
	 int data;
	 struct Node *nxt;
	};

void insert(struct Node **s,int n);
void del(struct Node **s);
void show(struct Node *s);

int main()
{
struct Node *s;
s = (struct Node*)malloc(sizeof(struct Node));
s=NULL;
  clrscr();
  printf("\nvalues:");

  insert(&s,14);

  insert(&s,189);
  insert(&s,147);
    insert(&s,143);
      insert(&s,154);
	     show(s);
printf("\n\nAfter first element deleted:\n");
	   del(&s);
show(s);
 return 0;
 }

void insert(struct Node **s,int n)
{
 struct Node *p;
 p=(struct Node*)malloc(sizeof(struct Node));
 p->data=n;
 p->nxt=NULL;
 if(*s==NULL)
    *s=p;
 else
   {
    p->nxt=*s;
    *s=p;
   }
}

void del(struct Node **s)
{
struct Node *p;
 if(*s!=NULL)
   {
     p=*s;
     *s=p->nxt;
     free(p);
   }
}

void show(struct Node *s)
{

 while(s!=NULL)
   {
    printf("\n%d",s->data);
    s=s -> nxt;
   }
}
