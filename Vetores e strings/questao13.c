#include <stdio.h>

/**
 * @brief funcao que ordena os numeros
 * 
 * @param x funcao original
 * @param tamanho quantidade de elementos da funcao
 * @param y funcao ordenada
 */
void Ordenation(int x[], int tamanho, int y[]);

int main(){
    int n, i, x[1000], y[1000];

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    Ordenation(x, n, y);
    return 0;
}
void Ordenation(int x[], int tamanho, int y[]){
    int i, c, m;

    for(c=0; c<tamanho; c++){
        for(i=0; i<tamanho; i++){
            if(x[i]>-1){
                m=i;
                break;
            }
        }
        for(i=0; i<tamanho; i++){
            if(x[i]<0){
                continue;
            }
            if(x[i]<x[m]){
                m=i;
            }
        }  
        y[c]=x[m];
        x[m]=-1;
    }
    for(i=0; i<tamanho; i++){
        printf("%d\n", y[i]);
    }

    
}