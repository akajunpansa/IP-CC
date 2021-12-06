#include <stdio.h> 
/**
 * @brief função que calcula o fatorial de um numero n
 * @param n numero inteiro positivo
 * @return fatorial de n
 */
unsigned long int fat(unsigned int n);

int main(){
    int n;
    unsigned long int f;
    scanf("%d", &n);
    f=fat(n);
    printf("%d! = %lu\n", n, f);

    return 0;
}

unsigned long int fat(unsigned int n){
    unsigned int a=1, mult=1;
    while(a<=n){
        mult*=a;
        a++;
    }
    return mult;
}