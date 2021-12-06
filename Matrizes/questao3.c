#include <stdio.h>

int main(){
    int M[100][100];
    int i, j, n;

    scanf("%d", &n);
    M[100][100]=n;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &(M[i][j]));
        }
    }
    for(i=0, j=n-1; i<n, j>=0; i++, j--){
        printf("%d\n", M[i][j]);
    }
    return 0;

}