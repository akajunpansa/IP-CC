#include <stdio.h>

#define N 6
#define L 50000
int main(){
    int M[L][N];
    int i, j, l, t;
    int lot=0, quina=0, sena=0, quadra=0;

    scanf("%d", &t);

    for(i=0; i<=t; i++){
        for(j=0; j<N; j++){
            scanf("%d", &M[i][j]);
        }
    }
    for(i=0;i<t;i++){
        for(j=0;j<N;j++){
            for(l=0;l<N;l++){
                if(M[i][j] == M[t][l]) lot++;
            }
        }
        if(lot == 4) quadra++;
        if(lot == 5) quina++;
        if(lot == 6) sena++;
        lot = 0;
    }
    if(sena == 0) printf("Nao houve acertador para sena\n");
    else printf("Houve %d acertador(es) da sena\n",sena);
    if(quina == 0) printf("Nao houve acertador para quina\n");
    else printf("Houve %d acertador(es) da quina\n",quina);
    if(quadra == 0) printf("Nao houve acertador para quadra\n");
    else printf("Houve %d acertador(es) da quadra\n",quadra);

    return 0;
}
