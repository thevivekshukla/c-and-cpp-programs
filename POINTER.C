#include<stdio.h>
#include<conio.h>
int main()
{
	int i=7, *j, *k;
	j=&i;
	k=&j;
	printf("\nThe address of i is %u",&i);
	printf("\nThe value of i is %d",i);
	printf("\nThe address of i is %d",j);
	printf("\nThe address of j is %u",&j);
	printf("\nThe address of j is %u",k);
	printf("\nThe value at j is %d",*j);
	printf("\nThe value at k is %d",*k);
	return 0;
}
