#include<stdio.h>
#include <conio.h>
#include<string.h>
void writeFile();

struct employee
{
	int ecode;
	char name[50];
	char sal[7];
};

FILE *file;
struct employee *emp;

void accept()
{
   printf("\nEnter details of the employee:");
   printf("\nEnter employee code:\t");
   scanf("%d",emp->ecode);
   printf("\nEnter name:\t");
   scanf("%s",emp->name);
   printf("\nEnter salary:\t");
   scanf("%s",emp->sal);
   writeFile();
}

void writeFile()
{
   file = fopen("employee.doc", "a+");
   if(!file)
      printf("\nUnable to write into file.");
   else
      fprintf(file, "\nEmployee Code:%d\nName: %s\nSalary: %s\n\n", emp->ecode, emp->name, emp->sal);
   fclose(file);
}


void readFile()
{
   file = fopen("employee.doc", "r");

   if(file == NULL)
      printf("\nFile not found.");
   else
      {
	 char ch;
	 while(( ch = getc(file) ) != EOF)
	 {
	   putchar(ch);
	 }
      }
      fclose(file);
}


void main()
{
   char res;
   int ans;
   clrscr();

   do{
   printf("\nEnter any choice:");
   printf("\n1. Enter data into file");
   printf("\n2. Display data into file");
   printf("\n3. Exit\n\n");
   printf("Enter choice:\t");
   scanf("%d", &ans);

   switch(ans)
   {
      case 1:
		accept();
		break;
      case 2:
		readFile();
		break;
      case 3:
		exit(0);
		break;
      default:
		printf("\nInvalid input.");
   }

   printf("\nDo you wish to continue(y/n).");
   fflush(stdin);
   scanf("%c", &res);
   }while(res == 'y' || res == 'Y');


}