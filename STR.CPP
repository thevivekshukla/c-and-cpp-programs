#include<iostream.h>
#include<conio.h>
#include<string.h>

int main()
{
    int len = 0;
    char s1[] = "Hello";
    char s2[] = "World";
    clrscr();
    //cin>>s1;
    //cin>>s2;
    len = strlen(s1);
    cout<<"Content of s1 is: "<<s1<<endl;
    cout<<"Content of s2 is: "<<s2<<endl;
    cout<<"Length of s1 is: "<<len<<endl;
    char s3[5]="";
    strcpy(s3, s1);
    cout<<"Content of s3 after copying s1 into it: "<<s3<<endl;
    strcat(s1,s2);
    cout<<"Content of s1 after concatenating s2 into it:"<<s1<<endl;
    int res=strcmp(s1,s2);
    if(res == 0)
    {
	cout<<"The strings s1 and s2 are equal."<<endl;
    }
    else
    {
	cout<<"The strings s1 and s2 are not equal."<<endl;
    }
    getch();
    return 0;
}
