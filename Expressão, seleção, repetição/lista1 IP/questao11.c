#include <stdio.h>
int main() {

    float preco_car;
    float preco_fab;
    float preco_imp;
    float custo;
    
    scanf("%f", &preco_car);
    scanf("%f", &preco_fab);
    scanf("%f", &preco_imp);
    custo=preco_car+(preco_car*preco_fab/100)+(preco_car*preco_imp/100);
    
    printf("O VALOR DO CARRO E = %.2f\n", custo);
    
    return 0;
}
