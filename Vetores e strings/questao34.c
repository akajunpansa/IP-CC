#include <stdio.h>

/**
 * @brief funcao que reordena um vetor em ordem crescente
 * 
 * @param x o vetor desordenado 
 * @param t o tamanho do vetor
 */
void CoutingSort(int x[], int t);

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
        CoutingSort(x, t);
    }

    return 0;
}
void CoutingSort(int x[], int t){
    int i, menor, ind, j;
    int y[10000];

    for(i=0; i<t; i++){
        menor=1001;
        for(j=0; j<t; j++){    
            if(x[j]<menor && x[j]!=-1){
                menor=x[j];
                ind=j;
            }
        }
        y[i]=menor;
        x[ind]=-1;
    }
    for(i=0; i<t; i++){
        printf("%d ", y[i]);
    }
    printf("\n");
}