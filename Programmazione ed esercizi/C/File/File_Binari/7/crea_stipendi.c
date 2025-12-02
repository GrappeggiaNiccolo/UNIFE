#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dipendente.h"

int main()
{
    Dipendente dipendenti[5] = {{"Rossi", 1750.0}, {"Bianchi", 1857.4}, {"Verdi", 2160.0}, {"Neri", 2000.0}, {"Esposito", 1950.0}};
    FILE *pf;
    if ((pf = fopen("stipendi.dat", "wb")) == NULL)
    {
        exit(1);
    }

    fwrite(dipendenti, sizeof(Dipendente), 5, pf);

    // for (int i = 0; i < 5; i++) {
    //     fwrite(&dipendenti[i], sizeof(Dipendente), 1, pf);
    // }

    if (fclose(pf) != 0)
    {
        exit(2);
    }
}