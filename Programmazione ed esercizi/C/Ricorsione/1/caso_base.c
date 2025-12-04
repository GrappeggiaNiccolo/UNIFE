#include <stdio.h>

int f(int n)
{
    if (n == 5)
    {
        printf("Fine\n");
    }
    else
    {
        printf("%d\n", n);
        f(n + 1);
    }
}

void f1(int n)
{
    printf("%d\n", n);
    f1(n + 1); // tail recursion
    // chiamata infinita se compilato con -o2
}

int main()
{
    f(5);
}