#include <stdio.h>

int main()
{
    int dividendo, divisore, quoziente = 0, resto;

    printf("Inserire il dividendo:\n");
    scanf("%d", &dividendo);
    printf("Inserire il divisore:\n");
    scanf("%d", &divisore);

    // calcolo la divisione come sottrazione
    while (dividendo >= divisore)
    {
        dividendo = dividendo - divisore;
        quoziente++;
    }
    resto = dividendo;
    
    printf("Il quoziente è %d, il resto è %d\n", quoziente, resto);

    return 0;
}