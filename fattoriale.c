#include <stdio.h>

int main()
{
    int x ;
    int  y = 1 ;
    printf("inserisci un numero tra 1 e 12 :\n");
    scanf ("%d", &x );

   

    while (x > 0) 
    {
        
        y = x * y;        
        x = x - 1;
        
    }

    printf ("fattoriale : %d \n", y );
    


}