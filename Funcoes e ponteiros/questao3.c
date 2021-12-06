#include <stdio.h>
/**
 * @brief função que troca a ordem dos numeros.
 * 
 * @param n o numero a ser invertido
 * @return o numero invertido
 */
int troca_num(int n);

int main() {
    int n, troca;
    scanf("%d", &n);
    troca=troca_num(n);
    printf("%d\n", troca);
    return 0;
}
int troca_num(int n){
    int a, b, c, swap;

    a=n/100;
    b=n%100/10;
    c=n%100%10;

    swap=c*100+b*10+a;
    
    return swap;
}