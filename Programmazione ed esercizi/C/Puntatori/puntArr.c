#include <stdio.h>

int main()
{
    int a[5] = {4, 1, 0, 8, 5};
    int *p;

    p = a; // p punta ad a

    printf("%d\n", *p);

    *p = 7;

    printf("%d\n", a[0]);

    scanf("%d", a);

    return 0;
}