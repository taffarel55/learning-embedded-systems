#include<stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    if(numero%2==0) {
        printf("par e ");
    } else {
        printf("ímpar e ");
    }

    if(numero>=0) {
        printf("positivo\n");
    } else {
        printf("negativo\n");
    }

    return 0;
}