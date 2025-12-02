#include <stdio.h>
// stampa a video tutti gli elementi
int main(int argc, char *argv[])
{
    int i;
    // argc: numero parametri
    printf("argc: %d\n", argc);

    // argv[]: parametri
    for (int i = 1; i <= argc - 1; i++)
    {
        printf("argv[%d]: %s\n", i, argv[i]); // nome eseguibile
    }
}