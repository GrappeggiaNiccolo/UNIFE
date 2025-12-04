#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pa; 
    int n = 1000;
    *pa = malloc(n * sizeof(int));

    return 0;
}