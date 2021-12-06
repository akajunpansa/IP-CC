#include <stdio.h>

#define NL 10
#define NC 10

int main(){
    int M[NL][NC];
    int n, m, i, j;

    scanf("%d", &n);
    while(n<1 || n>10){
        scanf("%d", &n);
    }
    scanf("%d", &m); 
    while(m<1 || m>10){
        scanf("%d", &m);
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &M[i][j]);
        }
    }
    for(i=0; i<n; i++){
        printf("linha %d: ", i+1);
        for(j=0; j<m; j++){
            printf("%d", M[i][j]);
            if(j+1!=m){
                printf(",");
            }
        }
        printf("\n");
    }
    return 0;
}