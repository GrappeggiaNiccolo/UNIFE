typedef enum
{
    Quadrato,
    Rettangolo,
    Cerchio,
    Triangolo
} TipoFigura;

typedef struct
{
    float lato;
} DatiQuadrato;

typedef struct
{
    float base;
    float altezza;
} DatiRettangolo;

typedef struct
{
    float raggio;
} DatiCerchio;

typedef struct
{
    float a;
    float b;
    float c;
} DatiTriangolo;

typedef struct
{
    TipoFigura tipo;
    union
    {
        DatiQuadrato datiQuadrato;
        DatiRettangolo datiRettangolo;
        DatiCerchio datiCerchio;
        DatiTriangolo datiTriangolo;
    } dati;
} Figura;

float area(Figura f);
float perimetro(Figura f);
Figura quadrato(float lato);
Figura rettangolo(float base, float altezza);
Figura cerchio(float raggio);
Figura triangolo(float a, float b, float c);