#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int num;
    int den;
} Frazione;

Frazione *frazione(int n, int d)
{
    Frazione *p;
    p = (Frazione *)malloc(sizeof(Frazione));

    p->num = n;
    p->den = d;
    return p;
}

int main()
{
    Frazione *bossetti;
    bossetti = frazione(4, 3); // "new"
    free(bossetti);
}