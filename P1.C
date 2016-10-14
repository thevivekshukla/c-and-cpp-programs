#include<stdio.h>
#include<conio.h>
#define PRODUCT(x) (x*x)
/*int PRODUCT(int x)
{
return x*x;
} */

int main()
{
int i,j,k,l,z;
clrscr();
i=PRODUCT(3+1);
j=PRODUCT(3+2);
k=PRODUCT(3+3);
l=PRODUCT(3+4);
printf("\ni=%d j=%d k=%d l=%d",i,j,k,l);
return 0;
}
