#include <stdio.h>

#define NL 500
#define NC 500

int main(){
    int X[NL][NC];
    int i, j, n, m, tmp;

    scanf("%d %d", &n, &m);

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(i%2==0 && j%2==1){
                X[i][j]=++tmp;
            }
            else if(i%2==1 && j%2==0){
                X[i][j]=++tmp;
            }
            else{
                X[i][j]=0;
            }
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", X[i][j]);
        }
        printf("\n");
    }
    return 0;

}
