#include <stdio.h>

int main ()

{
    int a;
    int b;
    int c;

    printf ("inserisci numeri:\n");
    scanf ("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf ("triangolo\n");

        if (a==b && b==c && c==a)
        {
            printf (" equilatero\n");

        }

        else if (a==b && c!=a )
        {
            printf ("isoscele\n");
        } 
         
         else if (b==c && a!=b )
         {
            printf ("isoscele\n");
         }
         
         else if ( c==a && b!=c)

         {
            printf ("isoscele\n");
         }

         else if (a!= b && b!=c && c!=a)
         {
            printf ("scaleno \n");
         }


        
    }
    else 
    {
        printf ("non triangolo\n");
    }

}
