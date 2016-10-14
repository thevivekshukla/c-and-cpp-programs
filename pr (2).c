#include<stdio.h>
#include<string.h>

void reverse(char *s)
{
    int len = strlen(s);
    char *t = s + len - 1;
    while(t >= s)
    {
        printf("%c",*t);
        t = t -1;
    }

}

void main()
{
    char str[] = "mirror";
    reverse(str);
}
