#include <stdio.h>
#include <stdlib.h>

#define DIM 50

int main()
{
    FILE *pf;
    int a[DIM], i, dl; // leggo un array

    if ((pf = fopen("binario.bin", "rb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    dl = fread(a, sizeof(int), DIM, pf);

    for (int i = 0; i < dl; i++) {
        printf("%d\n", a[i]);
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(2);
    }

    return 0;
}