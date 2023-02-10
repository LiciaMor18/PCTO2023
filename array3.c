#include <stdio.h>

//crea un array di intari riempilo di numeri a scalta utilizzando una sola variabile extra inverire l'ordine degli elementi 
//ex array 77 2 9 11 5 3 array invertito 3 5 11 9 2

int main()
{
    int i = 0; //
    int array [5];
    
    
    //riempilo di numero
    while ( i <= 4)
    {
        
        scanf ("%d" , &array [i]);
        i = i + 1;
    }
    
     //resetto l'array
    i = 0;
    // stampare l'array

    while ( i <= 4)
    {
        printf ("%d\n",array [i] );
        i = i + 1;
    }
    i = 0;

    // variabile temporanea
    int temp;
    while ( i < 2)
    {
        temp = array [i];
         array[i] = array [4 - i];
        array [ 4 - i] = temp;
        i = i + 1;
    } 
    i = 0 ;

    //stampo array 
    while ( i <= 4)
    {
        printf ("%d\n", array[i]); 
        i = i + 1;
    }

}

