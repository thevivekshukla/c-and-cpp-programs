#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fs, *ft;
	char ch;
	clrscr();

	fs = fopen("second.txt", "r");
	if(fs == NULL)
	{
		puts("Source file cannot be found.");
		fclose(fs);
		exit(1);
	}

	ft = fopen("first.txt", "w");
	if(ft == NULL)
	{
		puts("Target file does not found.");
		fclose(ft);
		exit(2);
	}

	while(1)
	{
		ch = getc(fs);
		if(ch == EOF)
			break;
		putc(ch, ft);
	}

	fclose(fs);
	fclose(ft);
	puts("File copied succesfully.");

	printf("\nContent of source file:\n");
	fs = fopen("second.txt", "r");
	while(1)
	{
		ch = getc(fs);
		if(ch == EOF)
			break;
		putchar(ch);
	}
	fclose(fs);

	printf("\n\nContent of target file:\n");
	ft = fopen("first.txt", "r");
	while(1)
	{
		ch = getc(ft);
		if(ch == EOF)
			break;
		putchar(ch);
	}
	fclose(ft);
}