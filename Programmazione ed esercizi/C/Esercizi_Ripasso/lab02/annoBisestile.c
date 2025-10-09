#include <stdio.h>

// stabilisco se un anno e' bisestile
int Is_LeapYear(int a)
{
    if (((a % 4) == 0) && ((a % 100) != 0))
    {
        return 1;
    }
    else if ((a % 400) == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    // definisco anno
    int anno;
    // input anno
    printf("Inserire l'anno da verificare:\n");
    scanf("%d", &anno);

    // verifico se è bisestile
    if (Is_LeapYear(anno))
    {
        printf("L'anno: %d è bisestile\n", anno);
    }
    else
    {
        printf("L'anno: %d non è bisestile\n", anno);
    }

    return 0;
}