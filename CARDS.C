#include<stdio.h>
#include<stdlib.h>
int main()
{
	char card_name[3];
	int val = 0;
	clrscr();
	puts("Enter card name:\t");
	scanf("%2s", card_name);

	if(card_name[0] == 'K' || 'k')
	{
		val = 10;
	}
	else if(card_name[0] == 'Q' || 'q')
	{
		val = 10;
	}
	else if(card_name[0] == 'J' || 'j')
	{
		val = 10;
	}
	else
	{
		val = atoi(card_name);
	}
	printf("\nYour card value is %d.",val);
	return 0;
}