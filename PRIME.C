#include<stdio.h>
#include<conio.h>
void main()
{
int num,i=2;
clrscr();
printf("Enter any no:\t");
scanf("%d",&num);
while(i<=num-1)
{
if(num%i==0)
{
printf("\nNo is not prime");
break;
}
i++;
}
if(i==num)
printf("\nNo is prime");
getch();
}