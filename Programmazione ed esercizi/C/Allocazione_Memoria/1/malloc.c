#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *a, i, n;

    p = (int *)malloc(sizeof(int)); // essendo malloc un puntatore a void, faccio il cast a puntatore a int
    if (p == NULL)
    {
        printf("Memoria insufficiente");
        exit(1);
    }

    *p = 4;
    free(p); // libero l'area di memoria, non si utilizza piu

    printf("Inserire dimensione area di memoria:\n");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));
    if (a == NULL)
    {
        printf("Memoria insufficiente");
        exit(1);
    }

    for (i = 0; i < n; i++)
    {
        a[i] = i;
    }
    free(a);

    return 0;
}