#include <stdio.h>

//l'arrey riempie di numeri pari da 0 a i * 2//

int main()
{
    int i = 0;
    int x = 0;
    int array[4];

    while (x<=4)
    {
        array[i]= x;
        i = i + 1;
        x = x + 2;
    }

    //resetto la i a 0//
    i = 0 ;
    while (i<+4)
    {
        printf ("%d\n", array[i]);
        i = i + 1;
    }
}