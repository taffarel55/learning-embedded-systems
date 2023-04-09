#include "math.h"

double pow2(double x) {
    return x*x;
}

unsigned long int fatorial(int n) {
    if (n < 0 || n>44) return -1;
    if (n < 2) return 1;
    
    int i = n;
    unsigned long int fat = 1;
    while (i>1) {
        fat*=i--;
    }

    return fat;
}