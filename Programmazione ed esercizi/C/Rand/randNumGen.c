#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define DIM 30

int RndInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

void main()
{
    // genero 30 numeri interi compresi tra 0 e 99, termino la serie
    // con -1 e ridirigo l'output in un file
    srand(time(NULL)); // 

    for (int i = 0; i < DIM; i++)
    {
        printf("%d\n", RndInt(0, 99)); // oppure rand() % 100
    }

    printf("-1\n"); // termino la serie
}
// per eseguire compilare, poi ./a.out > numeri.txt