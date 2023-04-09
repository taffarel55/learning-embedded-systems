#include<stdio.h>

int main(void) {
    float a = 3.05;
    double b = 3.05;

    if (a==3.05) {
        printf("1");
    }

    if (a==3.05f) {
        printf("2");
    }

    if (b==3.05) {
        printf("3");
    }

    printf("\n");
    return 0;
}