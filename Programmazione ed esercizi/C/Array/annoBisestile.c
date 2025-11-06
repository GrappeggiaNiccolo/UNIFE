#include <stdio.h>

#define FINE 2100
#define INIZIO 1900

int Bisestile(int a)
{
    return a % 400 == 0 || a % 4 == 0 && a % 100 != 0;
}

int main()
{
    int a[FINE - INIZIO + 1], b[FINE - INIZIO + 1], contBisestile = 0;

    for (int i = 0; i <= FINE - INIZIO; i++)
    {
        a[i] = INIZIO + i;

        if (Bisestile(a[i]))
        {
            b[contBisestile] = a[i];
            printf("%d è bisestile\n", b[contBisestile]);
            contBisestile++;
        }
    }

    // la dimensione logica di b[] è di 49,
    // quanto è il numero di elementi validi

    return 0;
}