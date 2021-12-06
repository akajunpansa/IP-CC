#include <stdio.h>
int main () {
    float nota;
    float conceito, A, B, C, D;

    scanf("%f", &nota);

    if (nota>=9){
    ;
        printf("NOTA = %.1f CONCEITO = A\n", nota);

    } else if(nota>=7.5 && nota<9){
        printf("NOTA = %.1f CONCEITO = B\n", nota);

    } else if(nota>=6 && nota<7.5){
        printf("NOTA = %.1f CONCEITO = C\n", nota);

    } else if(nota>=0 && nota<6){
        printf("NOTA = %.1f CONCEITO = D\n", nota);
    }
    return 0;
}