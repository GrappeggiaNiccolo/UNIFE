#include <stdio.h>
#include "contatore.h"

int main() {
    Contatore c1, c2;

    reset(&c1);
    reset(&c2);
    inc(&c1);
    inc(&c1);
    inc(&c2);
    printf("c1: %d c1: %d\n", val(c1), val(c2));
}
// main è client di ADT contatore, 
// cioè usa ADT contatore
