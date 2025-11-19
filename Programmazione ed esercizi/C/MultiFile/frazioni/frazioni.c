#include <stdio.h>
#include "frazioni.h"

/*typedef struct
{
    int num;
    int den;
} Frazione;*/



int mcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

Frazione frazione(int n, int d) // costruttore
{
    Frazione f;
    f.dati[0] = n;
    f.dati[1] = d;
    return f;
}

int num(Frazione f) // getter
{
    return f.dati[0];
}

int den(Frazione f) // getter
{
    return f.dati[1];
}

Frazione InputFrazione(void)
{
    int n, d;
    Frazione f;
    printf("Inserire numeratore:\n");
    scanf("%d", &n);
    printf("Inserire denominatore:\n");
    scanf("%d", &d);
    f = frazione(n, d);
    return f;
}
void StampaFrazionaria(Frazione f)
{
    int divisore;
    divisore = mcd(num(f), den(f));
    printf("\n%d/%d\n", num(f), den(f));
}

void StampaDecimale(Frazione f)
{
    printf("\n%.2f\n", (float)num(f) / (float)den(f));
}
