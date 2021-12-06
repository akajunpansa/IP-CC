#include <stdio.h>

#define N 1000

void MatrizOrd (int M[][N], int tam);

int main(){
    int M[N][N];
    int i, j, tam;

    scanf("%d", &tam);
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            scanf("%d", &M[i][j]);
        }
    }
    MatrizOrd(M, tam);
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void MatrizOrd (int M[][N], int tam){
    int i, j, l;
    int aux;

    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            for(l=j+1; l<tam; l++){
                if(M[j][i]>M[l][i]){
                    aux=M[j][i];
                    M[j][i]=M[l][i];
                    M[l][i]=aux;
                }
            }
        }
    }
}