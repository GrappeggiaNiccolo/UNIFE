#include <stdio.h>
#include <stdlib.h>

#define DIM 100

int Leggi_valori(int array[])
{
    FILE *file;
    int n, i = 0;

    // apertura del file in lettura
    file = fopen("numeri.in", "r");
    if (file == NULL)
    {
        printf("Errore: impossibile aprire il file numeri.in\n");
        return 0;
    }

    // lettura dei valori finché non si incontra un numero negativo o la fine del file
    while (fscanf(file, "%d", &n) == 1 && n >= 0 && i < DIM)
    {
        array[i] = n;
        i++;
    }

    fclose(file); // chiusura del file
    return i;     // restituisce il numero di valori letti
}

int Leggi_valori_Alberti(int a[])
{
    // questa funzione prende in input i numeri dal file numeri.in
    // però richiede di specifarlo dal file launch.json
    // "args": ["<", "numeri.in"],
    int i = 0;

    do
    {
        scanf("%d", &a[i]);
        if (a[i] < 0)
        {
            break;
        }
        i++;
    } while (1);
    return i;
}

void Stampa_array(int a[], int dl)
{
    for (int i = 0; i < dl; i++)
    {
        printf("%d\n", a[i]);
    }
}

int Minimo(int a[], int dl)
{
    int m = 0;
    for (int i = 1; i < dl; i++)
    {
        if (a[i] < a[m])
        {
            m = i;
        }
    }
    return a[m];
}

int Massimo(int a[], int dl)
{
    int m = 0;
    for (int i = 1; i < dl; i++)
    {
        if (a[i] > a[m])
        {
            m = i;
        }
    }
    return a[m];
}

float Media(int a[], int dl)
{
    int totale = 0;
    for (int i = 0; i < dl; i++)
    {
        totale += a[i];
    }

    // printf("%d %d\n", totale, dl);

    return (float)totale / dl;
}

int Moda(int a[], int dl)
{
    int j, cont = 0, contMax = 0, index = 0;
    for (j = 0; j < dl; j++)
    {
        cont = 0;
        for (int i = 0; i < dl; i++)
        {
            if (a[j] == a[i]) {
                cont++;
            }
        }
        if (cont > contMax) {
            contMax = cont;
            index = j;
        }
    }

    // trovo la massima frequenza
    return a[index];
}

int main()
{
    int a[DIM], dl; // dl = dimensione logica(lung arr effettiva)

    // leggo l'input
    dl = Leggi_valori(a);
    // Stampa_array(a, dl);

    // Valore Minimo
    printf("Minimo: %d\n", Minimo(a, dl));
    // Massimo
    printf("Massimo: %d\n", Massimo(a, dl));
    // Valore medio
    printf("Media: %.2f\n", Media(a, dl));
    // Moda :-(
    printf("Moda: %d\n", Moda(a, dl));
}