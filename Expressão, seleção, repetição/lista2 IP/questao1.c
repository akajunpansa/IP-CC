#include <stdio.h>
int main () {
    float aprovado;
    float reprovado;
    float media;
    float nota1, nota2, nota3;

    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    media = (nota1+nota2+nota3)/3;

    printf("MEDIA = %.2f\n", media);

    if (media>=6){
        printf("APROVADO\n");

    } else { 
        printf("REPROVADO\n");
    }
    return 0;
}