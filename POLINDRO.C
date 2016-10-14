#include<stdio.h>
#include<conio.h>
void main()
{
	char str[10];
	int i, n, j, count = 0;
	clrscr();
	printf("\nEnter the string:\t");
	scanf("%s",str);

	n  = strlen(str);

	if(n%2 == 0)
	{
		for(i=0,j=n-1;i<(n/2)-1, j>=(n/2);i++,j--)
		{
			if(str[i] == str[j])
				count++;
		}
		if(count == n/2)
			printf("\nString is palindrome.");
		else
			printf("\nSting is not a palindrome.");
	}
	else
	{
			for(i=0,j=n-1;i<=(n/2)-1, j>=(n/2)+1;i++,j--)
		{
			if(str[i] == str[j])
				count++;
		}
		if(count == n/2)
			printf("\nString is palindrome.");
		else
			printf("\nSting is not a palindrome.");
	}

	getch();
}