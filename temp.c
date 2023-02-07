#include <stdio.h>

int main()
{
    float temperatura;

    printf ("inserisci una temperatura in Celsius\n");
    scanf("%f" , &temperatura );
    if(temperatura< -273.15)
    {
        printf("errore\n");
    }
    else
    {
        
        float far=9/5*temperatura +32 ;
        printf("in Fharenheit: %f\n ", far );
        float kel = temperatura + 273.15 ;
        printf("in Kelvin: %f\n", kel);
    }
}
    
    
    
 
 


    
    
