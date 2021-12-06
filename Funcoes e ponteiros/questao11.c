#include <stdio.h>

/**
 * @brief funcao que converte os valores 
 * 
 * @param a notas de 100
 * @param b notas de 50
 * @param c notas de 10
 * @param d moedas de 1 real
 * @param n valor total
 * @return os valores convertidos
 */
int converte(int a, int b, int c, int d, int n);

int main(){
    int n, a, b, c, d;

    scanf("%d", &n);
    
    converte(a, b, c, d, n);

    return 0;
}
int converte(int a, int b, int c, int d, int n){
    a=n/100;
    b=n%100/50;
    c=n%100%50/10;
    d=n%100%50%10;
    printf("NOTAS DE 100 = %d\n", a);
    printf("NOTAS DE 50 = %d\n", b);
    printf("NOTAS DE 10 = %d\n", c);
    printf("MOEDAS DE 1 = %d\n", d);

    return n;
}
