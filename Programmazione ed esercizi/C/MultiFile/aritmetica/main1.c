#include <stdio.h>

int somma(int a, int b); // serve la definizione della funzione (o prototipo)

int differenza(int a, int b);

int main()
{
    printf("somma: %d\n", somma(2, 3));
    printf("differenza: %d\n", differenza(2, 3));
    return 0;
}
// compilando separamente i programmi non funzionano
// compilo con gcc -c aritmetica1.c , che crea aritmetica1.o
// faccio lo stesso per main1.c
// adesso posso linkare i due compilati con gcc aritmetica1.o main1.o