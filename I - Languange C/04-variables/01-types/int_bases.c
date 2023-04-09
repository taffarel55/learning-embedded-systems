#include<stdio.h>

int main(void) {
    unsigned int dec = 200;
    unsigned int hex = 0xC8;
    unsigned int bin = 0b11001000;
    unsigned int octal = 0310;

    printf("%d %d %d %d\n", dec, hex, bin, octal);

    return 0;
}