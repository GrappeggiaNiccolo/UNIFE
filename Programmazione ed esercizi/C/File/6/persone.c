#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char cognome[50];
    char nome[50];
    char sesso;
    int anno_nascita;
} Persona;

int main()
{
    Persona record, giovane;
    char sesso[2];
    FILE *pf;

    if ((pf = fopen("people.txt", "rt")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    fscanf(pf, "%s%s%s%d", giovane.cognome, giovane.nome, sesso, &giovane.anno_nascita);
    giovane.sesso = sesso[0];

    while (fscanf(pf, "%s%s%s%d", record.cognome, record.nome, sesso, &record.anno_nascita) == 4)
    {
        record.sesso = sesso[0]; // senno un char legge il carattere bianco

        if (record.anno_nascita > giovane.anno_nascita)
        {
            giovane = record;
        }
    }

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(2);
    }

    printf("Il più giovane è: %s %s\n", giovane.nome, giovane.cognome);

    return 0;
}