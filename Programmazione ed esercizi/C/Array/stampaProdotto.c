#include <stdio.h>

#define DIM 5

int main()
{
    int a[DIM];

    for (int i = 0; i < DIM; i++)
    {
        printf("Inserire il %d° elemento:\n", i + 1);
        scanf("%d", &a[i]);
    }

    int prodotto = 1;

    for (int i = 0; i < DIM; i++)
    {
        prodotto = a[i] * prodotto;
    }

    for (int i = 0; i < DIM; i++)
    {
        printf("%d", a[i]);
        if (i < DIM - 1)
        {
            printf(" x ");
        }
    }
    printf(" = %d\n", prodotto);
}