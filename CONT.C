#include<stdio.h>
void main()
{
int x=4,y=2,z;
clrscr();
while(x>=0)
{
x--;
y++;
if(x==y)
continue;  //continue skips the next statement and takes the control to the beginning of the loop
else
printf("\n%d %d",x,y);

}
getch();
}