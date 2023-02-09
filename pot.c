#include <stdio.h>

int main()
{
    float x ;
    float y ;
    float p =1 ;
    

    printf ("inserisci due numeri: \n");
    scanf ("%f %f" , &x, &y);

    if ( y > 0 )
    {

    while ( y != 0)
    {
       p = p * x;
       y = y - 1;
    }
    }
    else if ( y < 0)
    {
        x= 1/x;

        while (y <0)

        {
            p=p*x;
            y=y+1;
        }
       
    }
    printf ("potenza : %f \n" , p );

}
