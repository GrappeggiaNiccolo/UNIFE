#include <stdio.h>

#define DIM 5

// Inserimento ordinato di elementi in un array

int main()
{
    int a[DIM], m, j, dl, i;

    for (dl = 0; dl < DIM; dl++)
    {
        printf("inserire elelmento: \n");
        scanf("%d", &m);

        j = dl; // dl = dimensione logica

        while (j > 0 && m < a[j - 1]) // m precede a[j] secondo il criterio che si vuole
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = m;
    }

    for (i = 0; i < dl; i++) {
        printf("%d\n", a[i]);
    }
}