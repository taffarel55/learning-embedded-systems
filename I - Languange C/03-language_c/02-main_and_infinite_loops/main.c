#include<stdio.h>

#define MANEIRA 2

int main(void) {

    #if MANEIRA==1
        for(;;) {
            printf("Ao infinito e ao além\n");
        }
    #else
        while(1) {
            printf("Ao infinito e ao além\n");
        }
    #endif
}