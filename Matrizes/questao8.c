#include <stdio.h>

#define N 100

int main(){
    int mat[N][N];
    int i,j, m, n, a, b;
    scanf("%d %d %d %d",&m,&n,&a,&b);

    printf("P2\n");
    printf("%d %d\n",n,m);
    printf("255\n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i<a || i>m-1-a || j<a || j>n-1-a) printf("%d ",b);
            else printf("0 ");
        }
        printf("\n");
    }

    return 0;
}