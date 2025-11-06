#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 5

void Inserimento(void *arr)
{
    for (int i = 0; i < DIM; i++)
    {
        ((int *)arr)[i] = rand(); // uso la funzione random per generare numeri casuali
    }
}

int main()
{
    int arr[DIM], m = 0;

    srand(time(NULL)); // seed random generator

    Inserimento((void *)&arr);

    for (int i = 1; i < DIM; i++)
    {
        if (arr[i] > arr[m])
        {
            m = i;
        }
    }

    printf("max: %d\n", arr[m]);

    return 0;
}