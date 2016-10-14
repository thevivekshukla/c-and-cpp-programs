#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    int i, j, odd, even, o, e;
    odd = 0;
    even = 0;
    o = 0;
    e = 2;
    
    
    for(i=1; i<=t; i++)
        {
        if(i%2 != 0){
            odd++;
            
        }
        else
            {
            even++;
            
        }
    }
    
    
    if(odd != 0){
    for(i=1; i<=odd; i++)
        o = o + i;
    }
    
    if(even != 1 && even != 0){
    for(i=1, j=3; i<even, i<even; i++, j++){
        
        e = e + j;
    }
    }
    
    
    printf("%d",(o + e));
    return 0;
}
