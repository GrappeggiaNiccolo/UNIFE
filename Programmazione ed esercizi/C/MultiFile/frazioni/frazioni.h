typedef struct
{
    int dati[2];
} Frazione;

Frazione frazione(int n, int d);
int num(Frazione f);
int den(Frazione f);
Frazione InputFrazione(void);
void StampaFrazionaria(Frazione f);
void StampaDecimale(Frazione f);