#include <stdio.h>
#include <math.h>
#include "figura.h"

const double PI = 3.141592653589793;

float area(Figura f)
{
    switch (f.tipo)
    {
    case Quadrato:
        return f.dati.datiQuadrato.lato * f.dati.datiQuadrato.lato;
        break;
    case Rettangolo:
        return f.dati.datiRettangolo.base * f.dati.datiRettangolo.altezza;
        break;
    case Cerchio:
        return f.dati.datiCerchio.raggio * f.dati.datiCerchio.raggio * PI;
        break;
    case Triangolo:
        float q = (f.dati.datiTriangolo.a + f.dati.datiTriangolo.b + f.dati.datiTriangolo.c) / 2;
        return (float)sqrt((q * (q - f.dati.datiTriangolo.a) * (q - f.dati.datiTriangolo.b) * (q - f.dati.datiTriangolo.c)));
        break;
    }
    return -1;
}

float perimetro(Figura f)
{
    switch (f.tipo)
    {
    case Quadrato:
        return f.dati.datiQuadrato.lato * 4;
        break;

    case Rettangolo:
        return f.dati.datiRettangolo.altezza * 2 + f.dati.datiRettangolo.base * 2;
        break;
    case Cerchio:
        return 2 * PI * f.dati.datiCerchio.raggio;
        break;
    case Triangolo:
        return f.dati.datiTriangolo.a + f.dati.datiTriangolo.b + f.dati.datiTriangolo.c;
        break;
    }
}

Figura quadrato(float lato)
{
    Figura f;
    f.tipo = Quadrato;
    f.dati.datiQuadrato.lato = lato;
    return f;
}

Figura rettangolo(float base, float altezza)
{
    Figura f;
    f.tipo = Rettangolo;
    f.dati.datiRettangolo.base = base;
    f.dati.datiRettangolo.altezza = altezza;
    return f;
}

Figura cerchio(float raggio)
{
    Figura f;
    f.tipo = Cerchio;
    f.dati.datiCerchio.raggio = raggio;
    return f;
}

Figura triangolo(float a, float b, float c) {
    Figura f;
    f.tipo = Triangolo;
    f.dati.datiTriangolo.a = a;
    f.dati.datiTriangolo.b = b;
    f.dati.datiTriangolo.c = c;
    return f;
}