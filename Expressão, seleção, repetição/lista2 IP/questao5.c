#include <stdio.h>
int main() {
    int horas;
    float preco;
    float preco_1;
    float preco_2;
    float preco_3;

    scanf("%d", &horas);
    
    preco_1 = horas%3;
    preco_2 = preco_1*5;
    preco_3 = (horas/3)*10;
    preco = preco_2+preco_3;

    printf("O VALOR A PAGAR E = %.2f\n", preco);
    return 0;

}