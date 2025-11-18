#include <stdio.h>

/*typedef struct
{
    int num;
    int den;
} Frazione;*/

typedef struct
{
    int dati[2];
} Frazione;

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
    printf("\n%d/%d\n", num(f), den(f));
}

void StampaDecimale(Frazione f)
{
    printf("\n%.2f\n", (float)num(f) / (float)den(f));
}

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