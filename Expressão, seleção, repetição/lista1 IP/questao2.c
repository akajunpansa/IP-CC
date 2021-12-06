#include <stdio.h>

int main() {
    // Dados
    float grau_f;
    float grau_c;
    float polegada;
    float milimetro;
    
    scanf("%f %f", &grau_f, &polegada);
    grau_c= ((grau_f-32)*5)/9.0;
    milimetro= polegada*25.4;
    
    
    printf("O VALOR EM CELSIUS = %.2f\n", grau_c);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", milimetro);
    
    return 0;
}
