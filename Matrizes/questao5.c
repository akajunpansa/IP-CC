#include <stdio.h>

#define NL 500
#define NC 500

int main(){
    int X[NL][NC];
    int i, j, n, m, tmp, tmp2;

    scanf("%d %d", &n, &m);

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            if(i%2==1 && j%2==1){
                X[i][j]=1;
            }
            else if(i%2==0 && j%2==0){
                X[i][j]=1;
            }
            else{
                X[i][j]=0;
            }
        }
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            printf("%d", X[i][j]);
        }
        printf("\n");
    }
    return 0;

}