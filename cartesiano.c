#include <stdio.h>

int main()
{
    int x;
    int y;

    printf ("inserisci numero:\n");
    scanf ("%d %d", &x, &y);

    if (x > 0 && y > 0)
    {
        printf ("si trova nel quadrante 1\n");
    }
    else if (x<0 && y > 0)
    {
        printf ("si trova nel quadrante 2\n");
    }
    else if ( x<0 && y< 0)
    {
        printf ("si trova nel quadrante 3\n");
    }
    else if (x>0 && y<0 )
    {
        printf("si trova nel quadrante 4\n");
    
    }
    else if ( x==0 && y ==0)
    {
        printf ("si trova nel punto(0;0)\n");
    }
    else if ( x== 0 && y > 0)
    {
        printf("si trova tra il quadrante 1 e 2 \n");
    }
    else if (x > 0 && y == 0)
    {
        printf("si trova tra il quadrante 1 e 4\n ");
    }
    else if (x < 0 && y == 0)
    {
        printf("si trova tra il quadrante 2 e 3\n");
    }
    else if ( x == 0 && y < 0)
    {
        printf ("si trova tra il quardeante 3 e 4 \n");
    }
}