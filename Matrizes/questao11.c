#include <stdio.h>

#define NL 500
#define NC 500
#define wally 1111
#define wally_up 4
#define wally_left 0
#define wally_right 0
#define wally_down 8

/**
 * @brief funcao que busca e imprime a posição do wally
 * 
 * @param M matriz a qual o wally sera buscado
 * @param lin quantidade de linhas da matriz
 * @param colun quantidade de colunas da matriz
 */
void Wally(int M[][NC], int lin, int colun);

int main(){
    int i, j;
    int n, m;
    int M[NL][NC];

    scanf("%d %d", &n, &m);

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &M[i][j]);
        }
    }
    Wally(M, n, m);

    return 0;
}
void Wally(int M[][NC], int lin, int colun){
    int i, j;
    int lw=-1, jw=-1, c;
    int dw, cw, ew, bw;


    for(i=0; i<lin && lw==-1; i++){
        for(j=0; j<colun && lw==-1; j++){
            cw=M[i-1][j];
            bw=M[i+1][j];
            dw=M[i][j-1];
            ew=M[i][j+1];
            if(i-1<0) cw = M[lin-1][j];
            if(i+1>=lin) bw = M[0][j];
            if(j-1<0) dw = M[i][colun-1];
            if(j+1>=colun) ew = M[i][0];

            if(M[i][j]==wally){
               if(cw==wally_up && bw==wally_down && dw==wally_right && ew==wally_left){
                   lw=i;
                   jw=j;
               }
            }
        }
    }

    if(lw==-1 && jw==-1){
        printf("WALLY NAO ESTA NA MATRIZ\n");
    }
    else{
        printf("%d %d\n", lw, jw);
    }

}