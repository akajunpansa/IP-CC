#include <stdio.h>

#define N 10

void Square(float x[][N], int t, int pow); 

int main(){
    float x[N][N];
    int i, j, n=0, t, k;

    scanf("%d", &t);
    scanf("%d", &k);
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            scanf("%f", &x[i][j]);
        }
    }
    Square(x, t, k);
    return 0;
}
void Square(float x[][N], int t, int pow){
    int i, j, k, l;
    float aux[N][N]={0}, aux2[N][N];


    for(i=0; i<t; i++){
            for(j=0; j<t; j++){
                aux2[i][j]=x[i][j];
        }
    }
    // if(pow==2) pow++;
    for(l=2; l<=pow; l++){
        for(i=0; i<t; i++){
            for(j=0; j<t; j++){
                aux[i][j]=0;
                for(k=0; k<t; k++){
                    aux[i][j]+=x[k][j]*aux2[i][k];
                }
            }
        }
        for(i=0; i<t; i++){
            for(j=0; j<t; j++){
                if(aux[i][j]+1==1) aux[i][j] =0;  
                    x[i][j]=aux[i][j];
            }
        }
    }

    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            printf("%.3f ", x[i][j]);
        }
        printf("\n");
    }
}