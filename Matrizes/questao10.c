#include <stdio.h>

#define N 1000

/**
 * @brief funcao que faz a transposta da matriz
 *
 * @param Mt a matriz que recebera a transposta
 * @param M  a matriz a ser transpostada
 * @param tam o tamanho da matriz
 */
void Transposed (int Mt[][N], int M[][N], int tam);
/**
 * @brief funcao que realiza as operaçoes cm a matriz
 * 
 * @param Mt matriz transposta  
 * @param M matriz normal
 * @param tam tamanho das matrizes
 */
void Operation (int Mt[][N], int M[][N], int tam);

int main(){
    int i, j, t;
    int M[N][N];
    int Tp[N][N];

    scanf("%d", &t);
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            scanf("%d", &M[i][j]);
        }
    }
    Transposed(Tp, M, t);
    Operation(Tp, M, t);
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
           printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;

}
void Transposed (int Mt[][N], int M[][N], int tam){
    int i, j;

    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            Mt[i][j]=M[j][i];
        }
    }
}
void Operation (int Mt[][N], int M[][N], int tam){
    int i, j, tr=0;

    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            if(i==j){
                tr+=M[i][j];
            }
        }
    }
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            M[i][j]=tr*M[i][j]+Mt[i][j];
        }
    }
}
