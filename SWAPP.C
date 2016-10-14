/*Using this program we can understand how the call by value and call by
reference works.
Author: Vivek Shukla
Date created: 20-03-15
*/

#include<stdio.h>
#include<conio.h>
void swapp(int *, int *);
void swapv(int , int);
void main()
{
	int a, b;
	clrscr();
	printf("Enter the value of a and b:\t");
	scanf("%d%d",&a,&b);
	printf("\nEntered value of a=%d and b=%d\n\n",a,b);
	swapv(a,b); //using call by value
	swapp(&a,&b);  //using call by reference
	printf("\n\n\nUsing call by reference:");
	printf("\nAfter swaping the value of a=%d and b=%d",a,b);

	getch();
}

void swapp(int *x, int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}

void swapv(int k, int l)
{
int m;
m=k;
k=l;
l=m;
printf("\nUsing call by value:");
printf("\nAfter swaping the value of a=%d and b=%d",k,l);
}