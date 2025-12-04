#include <stdio.h>

int somma(int n) {
    int p = 2;
    if (n == 0) {
        return 0;
    }
    else {
        return n + somma(n - 1);
    }
}

int main() {
    printf("%d\n", somma(5));
    return 0;
}