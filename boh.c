#include <stdio.h>

int main()

{
    int num;

    printf ("inserisci un numero:\n");
    scanf ("%d", &num);

    if ((num%4 == 0 && num%100 != 0) || num %400 == 0)
    {
        printf("bisestile");
    }
    else
    {
        printf("non bisestile");
    }
}