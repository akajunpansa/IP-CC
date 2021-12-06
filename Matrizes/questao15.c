#include <stdio.h>

int main(){
    int i, j, n, m, x=0, y=0;
    int M[10][10];

    scanf("%d %d", &m, &n);

    if(n<1 || n>10 || m<1 || m>10){
        printf("Dimensao invalida\n");
        return 0;
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &M[i][j]);        
        }
    }
    while (x < m && y < n){
        for (i = y; i < n; i++)
        {
            printf("%d ", M[x][i]);
        }
        x++;
        for (i = x; i < m; i++)
        {
            printf("%d ", M[i][n - 1]);
        }
        n--;
        if (x < m)
        {
            for (i = n - 1; i >= y; i--)
            {
                printf("%d ", M[m - 1][i]);
            }
            m--;
        }
        if (y < n){
            for (i = m - 1; i >= x; i--)
            {
                printf("%d ", M[i][y]);
            }
            y++;
        }
    }
    printf("\n");
    return 0;
}