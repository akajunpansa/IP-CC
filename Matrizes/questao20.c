#include <stdio.h>

#define N 1000

void MatrizOrd (int M[][N], int l, int c);

int main(){
    int M[N][N];
    int i, j, tam, l, c;

    scanf("%d %d", &l, &c);

    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            scanf("%d", &M[i][j]);
        }
    }
    MatrizOrd(M, l, c);
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void MatrizOrd (int M[][N], int l, int c){
    int i, j, lme=0, cme=0, lma=0, cma=0;
    int menor, maior;

    menor=M[0][0];
    maior=M[0][0];
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            if(M[i][j]<menor){
                menor=M[i][j];
                lme=i;
                cme=j;
            }
            if(M[i][j]>maior){
                maior=M[i][j];
                lma=i;
                cma=j;
            }
        }
    }
    M[lme][cme]=maior;
    M[lma][cma]=menor;
}