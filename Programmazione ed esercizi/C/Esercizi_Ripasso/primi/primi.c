#include <stdio.h>

int main()
{
    int num, cont = 0;

    do
    {
        printf("inserire il numero da verificare: \n");
        scanf("%d", &num);
    } while (num < 2);

    for (int i = 2; i < num; i++)
    {
        if ((num % i) == 0) {
            printf("%d non è primo, %i è un divisore\n", num, i);
            cont++;
            // OTTIMIZZAZIONE -- se non volessi calcolare e stampare tutti i divisori basta mettere i = num,
            // cosi al primo divisore si ferma
            i = num;
        }
    }
    if (!cont) {
        printf("%d è primo\n", num);
    }

    return 0;
}