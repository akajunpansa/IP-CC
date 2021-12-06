#include <stdio.h>

#define N 101

/**
 * @brief funcao que verifique se as ruas da cidade estão seguras
 * 
 * @param M a matriz a ser analisada
 * @param tam o tamanho da matriz
 */
void City_security(int M[][N], int tam);

int main(){
    int i, j, n;
    int M[N][N];

    scanf("%d", &n);
    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            scanf("%d", &M[i][j]);
        }
    }
    City_security(M, n);

    return 0;
}
void City_security(int M[][N], int tam){
    int i, j, s;

    for(i=0; i<=tam; i++){
        for(j=0; j<=tam; j++){
            if(i+1<=tam && j+1<=tam){
                s = M[i][j]+M[i+1][j]+M[i][j+1]+M[i+1][j+1];
                if(s>=2){
                    printf("S");
                }
                else{
                    printf("U");
                }
            }
        }
        printf("\n");
    }
}