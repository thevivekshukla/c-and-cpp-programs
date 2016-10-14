#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	int count = 0;
    int val = 0;


	while(card_name[0] != 'X')
    {
        puts("\nEnter the card name:\t");
        scanf("%s", card_name);
        //val = 0;
        switch(card_name[0])
            {
            case 'K':
            case 'J':
            case 'Q':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;
            default:
                val = atoi(card_name);
                if(val <1 || val >10){
                    printf("\nI don't understand.");
                continue;
                }
            }


        if(val >= 3 && val <= 6)
        {
            //printf("\nCount has gone up.");
            count++;
        }
        else if(val == 10)
        {
            //printf("\nCount has gone down.");
            count--;
        }
        printf("\nThe count is %i.",count);
    }
}
