#include <stdio.h>
#define Res 'R'
#define Com 'C'
#define Ind 'I'

#define TX_MIN_R 5.00
#define TX_MIN_C 500.0
#define TX_MIN_I 800.0

#define CONS_MIN_C 80.0
#define CONS_MIN_I 100.0

#define VALOR_RES 0.05
#define VALOR_COM 0.25 
#define VALOR_IND 0.04

int main () {
    char tipo;
    int conta;
    float consumo;
    float valor;

    
    scanf("%d %f %c", &conta, &consumo, &tipo);
    
    switch (tipo){
        case Res:
        valor = TX_MIN_R+consumo*VALOR_RES;
        break;
     
        case Com:  
    if(consumo<= CONS_MIN_C) valor = TX_MIN_C;
    else valor = TX_MIN_C+(consumo-CONS_MIN_C)*VALOR_COM;
    break;

        case Ind:
     if(consumo<= CONS_MIN_I) valor = TX_MIN_I;
     else valor = TX_MIN_I+(consumo-CONS_MIN_I)*VALOR_IND;
        

    } 
    printf("CONTA = %d\n", conta);
    printf("VALOR DA CONTA = %.2f\n", valor);

    
    return 0;

}