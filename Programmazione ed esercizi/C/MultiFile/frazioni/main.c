#include <stdio.h>
# include "frazioni.h"

int main()
{
    Frazione f1, f2;
    // per accedere ai valori della struct uso una funzione apposita
    f1 = frazione(2, 3); // CreaFrazione è sostanzialmente un costruttore
    f2 = InputFrazione();

    printf("f1 frazionario: ");
    StampaFrazionaria(f1);
    printf("f1 decimale: ");
    StampaDecimale(f1);
}