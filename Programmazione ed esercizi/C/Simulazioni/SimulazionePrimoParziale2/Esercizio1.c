#include <stdio.h>

int MCD(int a, int b)
{
    while (a != b)
    {
        if (a < b)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }
    }
    return a;
}

int main()
{
    int M;

    printf("Inserire un numero intero: ");
    scanf("%d", &M);

    for (int i = 1; i <= M; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            printf("%.3f ", 1.0 / MCD(i, j));
        }
        printf("\n");
    }

    return 0;
}