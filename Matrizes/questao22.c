#include <stdio.h>

#define N 9

int Validate (int x[], int sud[][N]);

int main(){
    int i, j, v;
    int sud[N][N];
    int x[9]={1,2,3,4,5,6,7,8,9};

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
                scanf("%d", &sud[i][j]);
        }
    }
    v=Validate(x, sud);
    if(v==1){
        printf("valido\n");
    }
    else printf("invalido\n");

    return 0;
}
int Validate (int x[], int sud[][N]){
    int i, j, l, k,  count=0;

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            for(l=0; l<N; l++){
                if(sud[i][j]==x[l]) count+=sud[i][j];
            }            
        }
        if(count!=45) return 0;
        count=0;
    }
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            for(l=0; l<N; l++){
                if(sud[j][i]==x[l]) count+=sud[j][i];
            }            
        }
        if(count!=45) return 0;
        count=0;
    }
    // for(i=0; i<3; i++){
    //     for(j=3*i; j<3*i+3; j++){
    //         for(l=3*i; l<3*i+3; l++){
    //             for(k=0; k<N; k++){
    //                 if(sud[j][i]==x[k]) count++;
    //             }
    //         }            
    //     }

    // }
    return 1;
}