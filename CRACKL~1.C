#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    clrscr();
    for(i=1;i<=100;i++)
    {   if(i%3==0 && i%5==0)

	    printf("CracklePop\t");
	else if(i%5==0)
	    printf("Crackle\t");
	else    if(i%3==0)
	    printf("Pop\t");
        else
            printf("%d\t",i);

    }

    return 0;
}
