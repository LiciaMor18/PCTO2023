#include <stdio.h>

int main ()


{
    int x = 0;
    int sum =0;
    
    
    
    while ( x <= 100)
    {
        sum =  sum + x ;
        x = x + 2 ;
    }
    printf ("somma %d\n", sum);
}