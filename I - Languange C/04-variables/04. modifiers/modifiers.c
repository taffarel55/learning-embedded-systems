#include <stdio.h>
#define BYTE 8

int main(void) {

    // Size
    int inteiro = -30000;
    long int longInteiro = 200000000;
    short int shortInteiro = 30000;
    printf("%d %ld %d\n", inteiro, longInteiro, shortInteiro);

    // Signal
    unsigned char a = 'a';
    signed char b = 'b';
    unsigned int c = -65000;
    signed int d = -32000;
    printf("%c %c %d %d\n", a,b,c,d);

    return 0;
}