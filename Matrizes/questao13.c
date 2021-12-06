#include <stdio.h>
#include <stdlib.h>

#define N 201

int main(){
    int i, j, t, corf, x, y, cor, raio, tipo;
    int m[N][N];
    scanf("%d %d", &t, &corf);
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            m[i][j]=corf;
        }
    }
    scanf("%d %d", &x, &y);
    while(x!=-1 && y!=-1){
        scanf("%d %d %d", &cor, &raio, &tipo);
        if(x+raio >= t || x-raio < 0 || y+raio >= t || y-raio < 0) {
            scanf("%d %d", &x, &y);
            continue;
        }
        else{
            if(tipo==1){
                for(i=y+raio; i>=y-raio; i--){
                    if(y-raio<0) continue;
                    m[i][x+raio]=cor;
                    if(x-raio>=0) m[i][x-raio]=cor;
                }
                for(i=x+raio; i>=x-raio; i--){
                    if(x-raio<0) continue;
                    m[y+raio][i]=cor;
                    if(y-raio>=0) m[y-raio][i]=cor;
                }
            }
            else if(tipo == 2){
                for(i=y-raio; i<=y+raio; i++){
                    for(j=x-raio; j<=x+raio; j++){
                        m[i][j] = cor; 
                    } 
                } 
            } 
        }
        scanf("%d %d", &x, &y);
    }
    printf("P2\n");
    printf("%d %d \n", t, t);
    printf("255\n");
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}