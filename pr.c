#include <stdio.h>
2.	    int main()
3.	    {
4.	        int a[5] = {1, 2, 3, 4, 5};
5.	        int i;
6.	        for (i = 0; i < 5; i++)
7.	            if ((char)a[i] == '5')
8.	                printf("%d\n", a[i]);
9.	            else
10.	                printf("FAIL\n");
11.	    }
