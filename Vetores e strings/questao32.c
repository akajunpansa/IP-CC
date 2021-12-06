#include <stdio.h>

/**
 * @brief funcao que diz quantos pontos as pessoas marcaram na loteria
 * 
 * @param x os numeros marcados pelos jogadores
 * @param y o resultado da loteria
 * @return o numero de acertos
 */
int Lotery(int x[], int y[]);

int main(){
    int n, i, res;
    int x[100];
    int y[100];
    int sen=0, quin=0, qua=0;

    for(i=0; i<6; i++){
        scanf("%d", &y[i]);
    }
    scanf("%d", &n);
    while(n--){
        for(i=0; i<6; i++){
            scanf("%d", &x[i]);
        }
        res=Lotery(x, y);
        if(res==6){
            sen++;
        } 
        else if(res==5){
            quin++;
        }
        else if(res==4){
            qua++;
        }
    }
    if(sen>0){
        printf("Houve %d acertador(es) da sena\n", sen);
    }
    else{
        printf("Nao houve acertador para sena\n");
    }
    if(quin>0){
        printf("Houve %d acertador(es) da quina\n", quin);
    }
    else{
        printf("Nao houve acertador para quina\n");
    }
    if(qua>0){
        printf("Houve %d acertador(es) da quadra\n", qua);
    }
    else{
        printf("Nao houve acertador para quadra\n");
    }


    return 0;
}
int Lotery(int x[], int y[]){
    int i, j, c=0;

    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            if(x[j]==y[i]){
                c++;
            }
        }
    }
    return c;
}