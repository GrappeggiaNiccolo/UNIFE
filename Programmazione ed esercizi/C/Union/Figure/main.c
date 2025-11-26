#include <stdio.h>
#include "figura.h"

int main() {
    Figura f;
    f = quadrato(2);
    printf("Area Quadrato: %.2f\n", area(f));
    printf("Perimetro Quadrato: %.2f\n", perimetro(f));

    f = rettangolo(2, 3);
    printf("Area Rettangolo: %.2f\n", area(f));
    printf("Perimetro Rettangolo: %.2f\n", perimetro(f));

    f = cerchio(2);
    printf("Area Cerchio: %.2f\n", area(f));
    printf("Perimetro Cerchio: %.2f\n", perimetro(f));

    f = triangolo(2, 2, 2);
    printf("Area triangolo: %.2f\n", area(f));
    printf("Perimetro triangolo: %.2f\n", perimetro(f));
    return 0;
}