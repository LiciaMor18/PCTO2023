#include <stdio.h>

int main ()


{
    int x;
    

    printf ("inserisci numero:\n" );
    scanf ("%d", &x );
    int y = x - 1;

    while (x % y != 0 && y > 1)
    {
        y = y - 1 ;
    }
        if ( y == 1  )
        {
            printf ("numero primo\n");
        
        }
        
        else
        {
            printf("numero non primo %d \n", x);
        }
        

}

