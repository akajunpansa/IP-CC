#include <stdio.h>
int main() {
    double massa;
    double aceleracao;
    double tempo;
    double velocidade;
    double espaco;
    double trabalho;
      
    scanf("%lf %lf %lf", &massa, &aceleracao, &tempo);
    
    velocidade=(aceleracao*tempo)*3.6;
    
    espaco=(aceleracao*tempo*tempo)/2.0;
    
    trabalho=((massa*1000)*(velocidade/3.6)*(velocidade/3.6))/2.0;
    
    printf("VELOCIDADE = %.2lf\n", velocidade);
    printf("ESPACO PERCORRIDO = %.2lf\n", espaco);
    printf("TRABALHO REALIZADO = %.2lf\n", trabalho);
    
    return 0;
    } 
