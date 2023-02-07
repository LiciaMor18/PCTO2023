#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("inserisci due numeri:\n");
    scanf("%d %d", &a,&b);

    if ( a%b==0 )
    {
    printf("a multiplo di b\n");
    }
    else
    {
        printf("non multiplo\n");
    }
}
