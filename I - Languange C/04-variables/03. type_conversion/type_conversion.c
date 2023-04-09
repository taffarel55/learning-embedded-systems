#include<stdio.h>

int main(void) {
    int quantidade = 1;
    double preco = 30.0;
    float imposto = (float)0.05;
    double preco_final = (double) preco * imposto * (double) quantidade;

    printf("%.2f\n", preco_final);
    
    return 0;
}