#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
	{
	 int data;
	 struct Node *nxt;
	};

void insert(struct Node **s,int n);
void del(struct Node **s);
void show(struct Node *s);
void rev(struct Node *s);
void rmv(struct Node *s);

void main()
{
struct Node *head;
char ch;
int n;
head = (struct Node*
)malloc(sizeof(struct Node));
head = NULL;
  clrscr();
 do
 { printf("\nEnter value to be insert at beginig:\t");
   scanf("%d",&n);
   insert(&head,n);
   printf("\ncontinue..??(y/n):\t");
   fflush(stdin);
   ch=getche();
 }while(ch=='y'||ch=='Y');
clrscr();
printf("\n\t\tValues in Link List:");
show(head);

//printf("\n\t\tReverse:");
//rev(s);
//printf("\n\t\tAfter swapping last and first node(of orignal Link List):");
 //swp(s);

//printf("\n\t\tAfter removing duplicate element(of orignal Link List):");
// rmv(s);


printf("\n\t\tAfter first element deleted:");
del(&head);

//show(s);

 getch();
 }

void insert(struct Node **headref,int data1)
{
 struct Node *newData;
 newData = (struct Node*)malloc(sizeof(struct Node));
 newData -> data = data1;
 newData->nxt=NULL;
 if(*headref == NULL)
    *headref = newData;
	else
  {
    newData -> nxt = *headref;
    *headref = newData;
   }
}

void del(struct Node **headref)
{
struct Node *data;
 if(*headref != NULL)
   {
     data =*headref;
     *headref =data->nxt;
     free(data);
   }
}

void show(struct Node *headref)
{

 while(headref!=NULL)
   {
    printf("\n%d",headref -> data);
    headref = headref -> nxt;
   }
}

void rev(struct Node *s)
{
 struct Node *t;
 t = NULL;
 while(s!=NULL)
   {
    insert(&t,s->data);
    s=s->nxt;
   }
 show(t);
}

void rmv(struct Node *s)
{
 struct Node *q,*r;
 r=s;
 q=s->nxt;
 while(q!=NULL)
  {
   if(s->data==q->data)
     {
      r->nxt=q->nxt;
      free(q);
      q=r;
     }
     r=q;
     q=q->nxt;
  }
 if(s!=NULL)
   rmv(s->nxt);
 show(s);
}