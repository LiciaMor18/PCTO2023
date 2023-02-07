#include <stdio.h>

int main()

{

    int a; 
    int b;
    

    printf ("inserisci numeri: %d %d\n", a , b);
    scanf ("%d %d", &a, &b );
    int divisione = a / b;
    printf ("il risultato di a diviso b è: %d\n", divisione);

}