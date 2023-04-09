#include "math.h"
#include <stdio.h>

// gcc 1.c math.c math.h -o .code && ./.code

int main() {
    double x = pow2(50);
    printf("%.2f\n", x);

    unsigned long int y = fatorial(44);
    printf("%ld\n", y);

    // others...

    return 0;
}