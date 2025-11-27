#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;
    int n = 0; // leggo il primo numer odel file binario

    if ((pf = fopen("binario.bin", "rb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    // fread(&n, sizeof(int), 1, pf); // indirizzo var, dimensione var, numero elementi, file
    while (fread(&n, sizeof(int), 1, pf) == 1)
    {
        printf("%d\n", n);
    }
    
    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(2);
    }

    return 0;
}