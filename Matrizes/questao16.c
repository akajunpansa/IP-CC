#include <stdio.h>

#define X 10
#define Y 320
int main(){
    int logo[X][X], Veia[Y][Y];
    int i, j, k, l,  tlogo, tveia;
    int aux=0;

    scanf("%d", &tlogo);
    for(i=0; i<tlogo; i++){
        for(j=0; j<tlogo; j++){
            scanf("%d", &logo[i][j]);
        }
    }
    scanf("%d", &tveia);
    for(i=0; i<tveia; i++){
        for(j=0; j<tveia; j++){
            scanf("%d", &Veia[i][j]);
        }
    }
    for(i=0; i<tveia; i++){
        for(j=0; j<tveia; j++){
            if(Veia[i][j]==logo[0][0]){
                for(k=0; k<tlogo; k++){
                    for(l=0; l<tlogo; l++){
                        if(Veia[i+k][j+l]==logo[k][l]){
                            aux=1;
                        }
                        else{
                            aux=0;
                            break;
                        }
                    }
                }
                if(aux == 1){
                    printf("sim\n");
                    return 0;
                }
            }
        }
    } 
    printf("nao\n");
    return 0;
}