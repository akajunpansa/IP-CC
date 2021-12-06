#include <stdio.h>

/**
 * @brief funcao que imprime e inverte os valores no vetor
 * 
 * @param x valores alocados ao vetor
 * @param tamanho quantidade de elementos
 */
void Print_vet(int x[], int tamanho);

int main(){
    int n, y, i;
    int x[1000];

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
        
    }
    Print_vet(x, n);
    return 0;
}

void Print_vet(int x[], int tamanho){
    int i, maior=0, menor;
    
    menor=x[0]; 
    for(i=0; i<tamanho; i++){
        if(maior<x[i]){
            maior=x[i];
        }
        if(x[i]<menor){
            menor=x[i];
        }
        printf("%d ", x[i]);
    }
    printf("\n");
    for(i=tamanho-1; i>=0; i--){
        printf("%d ", x[i]);
    }
    printf("\n");
    printf("%d\n", maior);
    printf("%d\n", menor);
}
