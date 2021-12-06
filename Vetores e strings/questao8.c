#include <stdio.h>
#include <math.h>

/**
 * @brief funcao que calcula o tamanho da soma
 * 
 * @param i numero a qual será calculado o tamanho
 * @return contador de casas
 */
int Size(int i);

/**
 * @brief funcao que elimina os 0 da funcao
 * 
 * @param n a soma dos numeros
 * @param tamanho o tamanho do n
 */
void Elimine(int n, int tamanho);

int main(){
    int a, b;

    while(1){
        scanf("%d %d", &a, &b);
        if(a==0 && b==0){
            break;
        }
        Elimine(a+b, Size(a+b));

    }
    return 0;
}
int Size(int i){
    int a=0;
    while(i!=0){
        i/=10;
        a++;
    }
    return a;
}

void Elimine(int n, int tamanho){
    /**
 * 150
 * 0->numero%10^1/10^(i-1)
 * 5->numero%10^2/10^(i-1)
 * 1->numero%10^3/10^(i-1)
 */
    int i, c[999];
    for(i=1; i<=tamanho; i++){
        c[i-1]=n;
        c[i-1]%=(int)pow(10, i);
        c[i-1]/=(int)pow(10, i-1);
    }
    for(i=tamanho-1; i>=0; i--){
        if(c[i]){
            printf("%d", c[i]);
        }
    }
    printf("\n");
}