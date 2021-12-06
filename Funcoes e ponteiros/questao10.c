#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief funcao que calcula a prox potencia de n
 * 
 * @param n valor inteiro
 * @param p valor da potencia
 * @return retorna a potencia mais proxima
 */
int next_power(int n, int p);

int main(){
    int n, p, num;
    scanf("%d %d", &n, &p);
    num = next_power(n, p);
    printf("%d -> %d^%d = %d\n", n, num, p, (int)pow(num,p));

    return 0;
}

int next_power(int n, int p){
    int pot=1 ;
    while(pow(pot+1,p)<n)
        pot++;
    if(n-pow(pot,p)>pow(pot+1,p)-n)
        pot++;

    return pot;

}
