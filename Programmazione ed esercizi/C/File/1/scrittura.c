#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;
    char s1[80] = "Ferrara";
    int d = 44122;

    // apertura
    pf = fopen("dest.txt", "wt");
    if (pf == NULL)
    {
        printf("Errore apertura file\n");
        exit(-1);
    }

    // operazioni
    fprintf(pf, "%s\n", s1);
    fprintf(pf, "%d\n", d);

    // chiusura
    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(-2);
    }

    return 0;
}