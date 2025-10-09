#include <stdio.h>
// dico il numero di giorni in un anno

// stabilisco se l'anno e' bisestile
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
    // definisco anno e mese
    int anno, mese;
    int mesi[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // input mese
    printf("Inserire il mese (1-12):\n");
    scanf("%d", &mese);
    // input anno
    printf("Inserire l'anno:\n");
    scanf("%d", &anno);

    // visto che l'unico mese che potrebbe influenzare l'output è febbraio
    // controllo se il mese inserito è febbraio
    if (mese == 2)
    {
        // verifico quindi se l'anno è bisestile
        if (Is_LeapYear(anno))
        {
            printf("L'anno %d è bisestile e febbraio ha %d giorni\n", anno, mesi[mese - 1] + 1);
        }
        else
        {
            printf("L'anno %d non è bisestile e febbraio ha %d giorni\n", anno, mesi[mese - 1]);
        }
    }
    else
    {
        printf("Il %d° mese dell'anno ha %d giorni\n", mese, mesi[mese - 1]);
    }

    return 0;
}