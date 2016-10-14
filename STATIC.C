#include<stdio.h>
void increment();
int main()
{


increment();
increment();
increment();

return 0;
}

void increment()
{
static int i=1;     /*static persist the value of i throughout the
		      function */
printf("\n%d",i);
i++;
}
