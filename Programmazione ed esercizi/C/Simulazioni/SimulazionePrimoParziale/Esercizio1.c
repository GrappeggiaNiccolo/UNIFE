#include <stdio.h>

float Modulo(float x)
{
    return x < 0 ? -x : x;
}

float RadiceN(float a, int N)
{
    float x = 1.0f, p;

    do
    {
        p = 1.0f;

        for (int i = 0; i < N - 1; i++)
        {
            p = p * x;
        }

        x = ((N - 1) * p * x + a) / (N * p);
    } while (Modulo(p * x - a) / a > 1e-5);

    return x;
}

int main()
{
    int M;
    float y;

    printf("inserisci in numero reale (radicando): ");
    scanf("%f", &y);
    printf("inserisci in numero intero (indice della radice):");
    scanf("%d", &M);

    for (int i = 2; i <= M; i++)
    {
        // i prende valori da 2,...,M
        printf("%f\n", RadiceN(y, i));
    }

    return 0;
}