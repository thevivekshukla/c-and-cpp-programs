#include<stdio.h>

int main()
{
    int n[] = {5,10,15};
    int sum = 0;
    int i,j;
    int size = sizeof(n)/sizeof(n[0]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
             sum += n[i] & n[j];
        }
    }

    printf("%d",sum);
    return 0;
}
