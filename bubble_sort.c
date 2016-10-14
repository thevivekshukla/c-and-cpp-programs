#include <stdio.h>
#define SIZE 5
void sort(int [], int);

int main()
{
    int a[] = {5,4,3,1,2};
    int i;
    for(i=0; i<SIZE; i++) printf("%d\t",a[i]);
    sort(a, SIZE);
    printf("\nArray after sorting:\n");
    for(i=0; i<SIZE; i++) printf("%d\t",a[i]);
    return 0;
}

void sort(int x[], int n)
{
    int i, count, t=0;
    for(count=1; count<=n-1; count++)
    {
        for(i=0; i<SIZE-count; i++)
            if(x[i] > x[i+1])
        {

            t = x[i];
            x[i] = x[i+1];
            x[i+1] = t;
        }
    }
}
