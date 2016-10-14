#include <stdio.h>
#include <conio.h>

void main()
{
	FILE *f;
	char ch;
	clrscr();
	f = fopen("second.txt", "w");
	printf("\nEnter data into file:\n");
	while( ( ch = getchar() ) != EOF)     //EOF:end of file(alt+z)
		putc(ch, f);

	fclose(f);

	f = fopen("second.txt", "r");
	if(!f)                 // or f == NULL
	{
	printf("\nFile does not exist.");
	}
	else
	{
		do{
		ch = getc(f);
	       //	printf("%c",ch);
		 putchar(ch);
		}while(ch != EOF);
	}
	fclose(f);
}