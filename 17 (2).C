#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t;
    int i, count = 0;
    float f, an;
    scanf("%d",&t);

    for(int j = 0; j < t; j++){
        int n;

        scanf("%d",&n);
        int a[n];
        for(i = 0; i < n; i++){
           scanf("%d",&a[i]);
        }

        f = floor( (float)n/2 );

        for(i =0; i < n; i++){
            if(a[i] == '1')
                count++;
        }
        an = f - count;
        printf("%f\n",an);
    }
    return 0;
}
