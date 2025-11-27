#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[31];
    float calorie;
} Alimento;

int main()
{
    FILE *pf;
    Alimento r;
    float somma_calorie = 0.0f;
    int cont = 0;

    if ((pf = fopen("calorie.txt", "rt")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    while (fscanf(pf, "%s%f", r.nome, &r.calorie) == 2)
    {
        // r contiene un record del file
        somma_calorie += r.calorie;
        cont++;
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(2);
    }

    printf("Media: %.2f\n", somma_calorie / cont);

    return 0;
}