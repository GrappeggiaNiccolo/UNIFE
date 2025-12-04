#include <stdio.h>
#include <stdlib.h>

char *crea_stringa()
{
    char *pr;
    pr = (char *)malloc(50 * sizeof(char));
    strcpy(pr, "Ferrara");

    return pr;
}

int main()
{
    char *s;
    s = crea_stringa();
    printf("%s\n", s);
    free(s);
}