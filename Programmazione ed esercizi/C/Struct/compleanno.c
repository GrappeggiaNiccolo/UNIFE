#include <stdio.h>

/* struct {
    int giorno;
    int mese;
    int anno;
} oggi; --> variabile di tipo struttura*/

// definisco un tipo di variabile
typedef struct
{
    int giorno;
    int mese;
    int anno;
} Data;

typedef struct
{
    char nome[20];
    Data nascita;
} Persona;

int main()
{
    Data oggi;
    Persona p;

    // data
    printf("Inserire il giorno corrente : \n");
    scanf("%d", &oggi.giorno);
    printf("Inserire il mese corrente: \n");
    scanf("%d", &oggi.mese);
    printf("Inserire l'anno corrente: \n");
    scanf("%d", &oggi.anno);
    // persona
    printf("\nInserire il nome: \n");
    scanf("%s", p.nome);
    printf("Inserire il giorno di nascita: \n");
    scanf("%d", &p.nascita.giorno);
    printf("Inserire il mese di nascita: \n");
    scanf("%d", &p.nascita.mese);
    printf("Inserire l'anno di nascita: \n");
    scanf("%d", &p.nascita.anno);

    // se oggi è il compleanno della persona, auguri
    if (p.nascita.giorno == oggi.giorno && p.nascita.mese == oggi.mese) {
        printf("\nAuguri %s!! Oggi è il tuo compleanno!!\n\n", p.nome);
    }
    else {
        printf("\nMi dispiace %s, oggi non è il tuio compleanno...\n\n", p.nome);
    }

}