#include <stdio.h>

/**
 * @brief função que executa os testes
 * 
 * @param t o numero de testes
 * @return int o numero de execuções
 */
int teste(int t);

/**
 * @brief função que inverte numeros
 * 
 * @param n o numero a ser invertido
 * @return o numero invertido
 * 
 */
int troca_num(int a, int b, int * n);



int main(){
    int a, b, n, t;
    
    scanf("%d", &t);
    teste(t);
    
    return 0;
    
}
int teste(int t){
    int i, a, b;
    int n;
    for(i=1; i<=t; i++){
        scanf("%d %d", &a, &b);
        troca_num(a, b, &n);
        printf("%d\n", n);
    }
    return n;

}
int troca_num(int a, int b, int * n){
    int o, i, p, x, y, z, swapa, swapb;

    i=a/100;
    o=a%100/10;
    p=a%100%10;

    x=b/100;
    y=b%100/10;
    z=b%100%10;

    swapa=p*100+o*10+i;
    swapb=z*100+y*10+x;
    if(swapa>swapb){
        *n=swapa;
    }
    else{
        *n=swapb;
    }
    
    return *n;
}

