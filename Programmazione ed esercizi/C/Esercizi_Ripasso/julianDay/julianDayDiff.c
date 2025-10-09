#include <stdio.h>

// differenza fra due giorni juliani
int JD_Calculator(int g, int m, int a)
{
    int n0, n1, n2, n3, jd;

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

    return jd;
}

int main()
{
    // definisco giorno mese e anno
    int g[2], m[2], a[2];
    int jd[2], diff;

    // input g, m, a
    for (int i = 0; i < 2; i++)
    {
        printf("Inserisci il giorno %d:\n", i + 1);
        scanf("%d", &g[i]);
        printf("Inserisci il mese %d:\n", i + 1);
        scanf("%d", &m[i]);
        printf("Inserisci l'anno %d:\n", i + 1);
        scanf("%d", &a[i]);
        printf("\n");

        jd[i] = JD_Calculator(g[i], m[i], a[i]);

        if (i > 0)
        {
            diff = jd[i - 1] - jd[i];
        }
    }

    // prendo il valore assoluto
    if (diff < 0)
    {
        diff = -diff;
    }

    printf("La differenza di giorni è: %d\n\n", diff);

    return 0;
}