#include "define_labels.h"
#include "define_macros.h"
#include "if_elif_else.h"
#include "pragma_functions.h"

#define IDIOMA 3

#include<stdio.h>
    
// Não funciona em compilador gcc    
#pragma startup func1 
#pragma exit func2 

void __attribute__((constructor)) func1(); 
void __attribute__((destructor)) func2(); 


int main() {
    printf("%.2f\n", segundos_para_dias(90000));
    printf("%.2f\n", media(3,2,2));

    #if IDIOMA==1
        helloWorldPortugues();
    #elif IDIOMA==2
        helloWorldIngles();
    #else 
        erroIdioma();
    #endif 
}