// implementazione ADT Contatore
#include <stdio.h>
#include "contatore.h"

void reset(Contatore *pc)
{
    *pc = 0;
}
void inc(Contatore *pc)
{
    (*pc)++;
}
unsigned int val(Contatore c)
{
    return c;
}