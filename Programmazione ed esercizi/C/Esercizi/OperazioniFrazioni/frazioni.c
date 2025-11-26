#include <stdio.h>
#include "frazioni.h"

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
    int divisore;
    if (d < 0)
    {
        n = -n;
        d = -d;
    }
    divisore = mcd(va(n),  va(d));
    f.num = n / divisore;
    f.den = d / divisore;
    return f;
}

int num(Frazione f) // getter
{
    return f.num;
}

int den(Frazione f) // getter
{
    return f.den;
}

Frazione InputFrazione(void)
{
    int n, d;
    printf("Inserire numeratore:\n");
    scanf("%d", &n);
    printf("Inserire denominatore:\n");
    scanf("%d", &d);
    return frazione(n, d);
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
