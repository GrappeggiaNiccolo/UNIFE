#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;

    int valore, somma; // reduce(+, 0, contenuto di interi.dat)

    if ((pf = fopen("testo.txt", "rb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }
    // sommo tutti i valori del file
    somma = 0;

    while (fscanf(pf, "%d", &valore) == 1)
    {
        somma += valore;
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura");
        exit(2);
    }

    printf("Somma: %d\n", somma);

    return 0;
}