#include<stdio.h>
void main()
{
long p, t, count=1;
float si, r;
clrscr();
printf("Enter p, t and r");
scanf("%d %d %f",&p,&t,&r);
while(count<=3)
{
si=(p*t*r)/100;
printf("simple interest is %f",si);
count++;
}
getch();
}