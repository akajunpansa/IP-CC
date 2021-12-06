#include <stdio.h>
 
/**
 * @brief Função que calcula a raiz quadrada de n
 * 
 * @param n n um numero real qualquer
 * @return a raiz quadrada de n
 */
double raiz(double n);

/**
 * @brief Valor absoluto de um numero qualquer
 * 
 * @param n n um número real qualquer
 * @return o valor absoluto de n
 */
double absoluto(double n );

int main(){
    double n;

    scanf("%lf", &n);

    raiz(n);
    
    return 0;
}
double raiz(double n){
    double e, lim_erro;
    double r0;

    scanf("%lf", &e);
    
    r0=1;
    lim_erro=n-r0*r0;

    while(lim_erro>e){
        r0=(r0+(n/r0))/2;
        lim_erro=n-r0*r0;
        lim_erro=absoluto(lim_erro);
        printf("r: %.9lf, err: %.9lf\n", r0, lim_erro);
    }

}
double absoluto(double n ){
    if(n<0) n*=-1;
    return n;
}