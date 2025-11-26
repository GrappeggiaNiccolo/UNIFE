typedef struct
{
    int num;
    int den;
} Frazione;

int mcd(int a, int b);

Frazione frazione(int n, int d); // costruttore
int num(Frazione f); // getter
int den(Frazione f); // getter
Frazione InputFrazione(void);
void StampaFrazionaria(Frazione f);
void StampaDecimale(Frazione f);