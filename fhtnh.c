#include <stdio.h>

int main()
{
    char c;

    printf("Inserisci una lettera\n");
    scanf("%c", &c);

    if (c == 97 || c == 101 || c == 105 || c == 111 || c == 117)
        printf("vocale\n");
    else
        printf("consonante\n");
}