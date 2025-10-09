#include <stdio.h>

int main()
{
    // definisco giorno mese e anno
    int g, m, a;
    int n0, n1, n2, n3, jd;

    // input g, m, a
    printf("Inserisci il giorno:\n");
    scanf("%d", &g);
    printf("Inserisci il mese:\n");
    scanf("%d", &m);
    printf("Inserisci l'anno:\n");
    scanf("%d", &a);

    // calcolo di N0
    n0 = (m - 14) / 12;

    // calcolo di N1
    n1 = 1461 * (a + 4800 + n0) / 4;

    // calcolo di N2
    n2 = 367 * (m - 2 - 12 * n0) / 12;

    // calcolo di N3
    n3 = 3 * (a + 4900 + n0) / 400;

    // calcolo di JD
    jd = n1 + n2 - n3 + g - 32075;

    printf("Il giorno giuliano è: %d\n", jd);

    return 0;
}