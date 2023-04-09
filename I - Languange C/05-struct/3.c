#include<stdio.h>

struct exemplo
{
    int a : 2;
    int b : 2;
    int c : 2;
};

int main() {
    struct exemplo ex;

    ex.a = 0b01;
    printf("%d\n", ex.a);
    ex.a++;
    printf("%d\n", ex.a);
    ex.a++;
    printf("%d\n", ex.a);

    return 0;
}