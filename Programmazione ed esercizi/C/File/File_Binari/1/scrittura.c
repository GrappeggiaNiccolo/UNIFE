#include <stdio.h>
#include <stdlib.h>

#define DIM 10

int main()
{
    FILE *pf;
    // int i = 12;
    int a[DIM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    if ((pf = fopen("binario.bin", "wb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    // fwrite(&i, sizeof(i), 1, pf); // indirizzo var, dimensione var, numero elementi, file
    fwrite(a, sizeof(int), 10, pf); // scrittura singola di tutti gli elementi
    // for (int i = 10; i < DIM; i++)
    // {
    //     fwrite(&a[i], sizeof(int), 1, pf); // scrittuta uno ad uno
    // }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(2);
    }

    printf("Scrittura avvenuta con successo\n");

    return 0;
}