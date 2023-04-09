#include<stdio.h>

#define TAM 15

int main () {
    int identidade[TAM][TAM]; 

    for(int i = 0; i < TAM; i++) {
        for(int j=i==0?0:i; j <= TAM; j++) {
            if (i==j-1) {
                identidade[i][j-1] = 1;
            } else {
                identidade[i][j-1] = 0;
                identidade[j-1][i] = 0;
            }
        }
    }

    for(int i = 0; i < TAM; i++) {
        for(int j=0; j < TAM; j++) {
            printf("%d ", identidade[i][j]);
        }
        printf("\n");
    }

    return 0;
}