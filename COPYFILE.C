#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp1, *fp2;
	char ch;
	clrscr();

	fp1 = fopen("first.txt", "r");
	fp2 = fopen("second.txt", "w");

	while(1){
		ch = fgetc(fp1);

		if(ch == EOF)
			break;
		else
			putc(ch, fp2);
	}

	printf("\nFile has been succesfully copied.");
	fclose(fp1); //closing first file for writing.
	fclose(fp2); //closing second file for writing.

	printf("\nContent of first file is:\n");
	fp1 = fopen("first.txt", "r");
	if(!fp1)
		printf("\nFile does not exist.");
	else
	{
		do{
			ch = getc(fp1);
			putchar(ch);
		}while(ch != EOF);
	}
	fclose(fp1);  //closing first file for reading.

	printf("\nContent of second file is:\n");
	fp2 = fopen("second.txt", "r");
	if(!fp2)
		printf("\nFile does not exist.");
	else
	{
		do{
		ch = getc(fp2);
		putchar(ch);
		}while(ch != EOF);
	}
		fclose(fp2);    //closing second file for reading.
}