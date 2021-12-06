#include <stdio.h>
int main() {
    float raio;
    float altura;
    float pi;
    float Ai;
    float Ac; //Area circulo
    float Al; //Area lateral
    float custo;



    scanf("%f %f", &raio, &altura);
    pi = 3.14159;
    Ac = pi*raio*raio;
    Al = 2*pi*raio*altura;
    Ai = 2*Ac+Al;
    custo = Ai*100;

    printf("O VALOR DO CUSTO E = %.2f\n", custo);

    return 0;
}