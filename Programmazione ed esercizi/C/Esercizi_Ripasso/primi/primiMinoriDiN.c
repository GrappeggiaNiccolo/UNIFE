#include <stdio.h>

int Primo(int num)
{
    int cont = 0;
    for (int i = 2; i < num; i++)
    {
        if ((num % i) == 0)
        {
            cont++;
            i = num;
        }
    }
    if (!cont)
    {
        return 1; // il numero è primo
    }
    return 0; // numero non primo
}

int main()
{
    int num, cont = 0;
    // input numero
    do
    {
        printf("Inserire il numero da verificare (>1): \n");
        scanf("%d", &num);
    } while (num < 2);

    printf("Numeri primi minori di %d:\n", num);

    for (int i = 2; i < num; i++)
    {
        if (Primo(i))
        {
            printf("%d\n", i);
            cont++;
        }
    }
    if (!cont)
    {
        printf("Non ci sono numeri primi minori di %d\n\n", num);
    }

    return 0;
}