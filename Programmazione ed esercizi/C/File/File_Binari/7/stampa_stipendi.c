#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dipendente.h"

#define DIM 100

int main()
{
    Dipendente dipendenti[DIM];
    int dl;
    FILE *pf;
    if ((pf = fopen("stipendi.dat", "rb")) == NULL)
    {
        exit(1);
    }

    dl = fread(dipendenti, sizeof(Dipendente), DIM, pf); // il numero di valori letti è il numero restituito dalla fread()

    for (int i = 0; i < dl; i++)
    {
        printf("%s %.2f\n", dipendenti[i].nome, dipendenti[i].stipendio);
    }

    if (fclose(pf) != 0)
    {
        exit(2);
    }
}