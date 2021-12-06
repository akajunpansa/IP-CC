#include <stdio.h>

/**
 * @brief funcao que reordena um vetor em ordem crescente
 * 
 * @param x o vetor desordenado 
 * @param t o tamanho do vetor
 */
void quickSort(int*A, int p, int r);
int partition (int *A, int p, int r);
void troca(int *a, int *b);

int main(){
    int t, i;
    int x[10001];

    while(1){
        scanf("%d", &t);
        if(t==0){
            return 0;
        }
        for(i=0; i<t; i++){
            scanf("%d", &x[i]);
        }
        quickSort(x, 0, t-1);
        for(i=0; i<t; i++){
            printf("%d ", x[i]);
        }
        printf("\n");
    }

    return 0;
}
void quickSort(int*A, int p, int r){
    int q;
    if(p<r){
        q=partition(A,p,r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}
int partition (int *A, int p, int r) {
    int pivo = A[r], i = p-1, j;

    for (j = p; j <= r - 1; j++) {
        if (A[j] <= pivo) {
        i = i + 1;
        troca(&A[i], &A[j]);
    }
    }
    troca(&A[i+1], &A[r]);
    return (i + 1);
}
void troca(int *a, int *b){
    int aux;

    aux=*a;
    *a=*b;
    *b=aux;
}