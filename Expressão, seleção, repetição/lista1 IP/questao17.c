#include <stdio.h>
int main() {
    int notas_100;
    int notas_50;
    int notas_10;
    int moedas_1;
    int valor;

    scanf("%d", &valor);

    notas_100 = valor/100;
    notas_50 = (valor%100)/50;
    notas_10 = ((valor%100)%50)/10;
    moedas_1 = (((valor%100)%50)%10)/1;

    printf("NOTAS DE 100 = %d\n", notas_100);
    printf("NOTAS DE 50 = %d\n", notas_50);
    printf("NOTAS DE 10 = %d\n", notas_10);
    printf("MOEDAS DE 1 = %d\n", moedas_1);
    
    return 0;
}