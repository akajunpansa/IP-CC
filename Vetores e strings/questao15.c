#include <stdio.h>
#include <stdlib.h>

/**
 * @brief funcao que calcula a menor distancia entre os elementos do vetor
 * 
 * @param x os elementos do vetor   
 * @param tamanho a quantidade de elementos
 */
void Minor(int x[], int tamanho);

int main(){
    int n, m, i, j, x[1000];

    scanf("%d", &n);
    while(n--){
        scanf("%d", &m);
        for(j=0; j<m; j++){
            scanf("%d", &x[j]);
        }
        Minor(x, m);
    }
    
    return 0;
}
void Minor(int x[], int tamanho){
    int i, m=100000, n, j;
    
    for(i=0; i<tamanho; i++){
        for (j = 0; j < tamanho; j++){
            if(j==i){
                continue;
            }
            n=x[i]-x[j];
            if(n<0){
                n*=-1;
            }
            if(m>n){
                m=n;
            }
        }
    }
    printf("%d", m);
    printf(" %d\n", tamanho*tamanho);
}