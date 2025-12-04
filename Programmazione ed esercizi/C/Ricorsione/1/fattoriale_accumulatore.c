#include <stdio.h>

int fatt(int n, int p)
{
    if (n <= 1)
    {
        return p;
    }
    else
    {
        fatt(n - 1, n * p); // tail recursion
        // si compila usando memoria costante,
        // cioe un solo record di attivazione
    }
    return 0;
}

int main()
{
    int m;
    m = fatt(5, 1);
    printf("Fattoriale: %d\n", m);

    return 0;
}