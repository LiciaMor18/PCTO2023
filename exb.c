#include <stdio.h>

int main ()

{
    int annon;
   

    printf ("inserisci anno di nascita:\n");
    scanf ( "%d", &annon);
    
    if ( annon== 1969)
    {
        printf ("sei nato nel 1969\n");
    }
     
    else if ( annon > 1969)
    { 
        int anno=annon-1969;
        printf ("sei nato %d anni dopo il 1969\n", anno);
    }
        
    else if ( annon< 1969)
    {
        int annop = 1969 - annon;
        printf ("sei nato %d prima del 1965\n", annop);
    }
}