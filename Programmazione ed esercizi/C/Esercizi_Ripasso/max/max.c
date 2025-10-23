// stampare il massimo di 5 numeri dati in input
#include <stdio.h>

int main()
{
    int length = 4;
    int a, m, i;

    scanf("%d", &m); // cosi si risparmia un giro del ciclo

    // inserimento valori
    for (i = 0; i < length; i++)
    {
        // input numeri
        printf("inserire il %d° numero: \n", i + 1);
        scanf("%d", &a);

        // aggiornamento accumulatore
        // m = (a > m ? a : m);
        if (a > m)
        {
            m = a;
        }

        printf("max = %d\n\n", m);
    }

    return 0;
}