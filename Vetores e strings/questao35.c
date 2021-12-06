#include <stdio.h>

/**
 * @brief funcao que gera a união dos 2 conjuntos   
 * 
 * @param x conjunto A
 * @param y conjunto B
 * @param n tamanho de A
 * @param m tamanho de B
 */
void Union(int x[], int y[], int n, int m);

/**
 * @brief funcao que gera a interceção de 2 conjuntos 
 * 
 * @param x conjunto A
 * @param y conjunto B
 * @param n tamanho de A
 * @param m tamanho de B
 */
void Intersection(int x[], int y[], int n, int m);

int main(){
    int m, n, i, j;
    int x[1000], y[1000];

    scanf("%d", &n);
    while(n<1 || n>100){
        scanf("%d", &n);
    }
    scanf("%d", &m);
    while(m<1 || m>100){
        scanf("%d", &m);
    }
    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
        for(j=0; j<i; j++){
            while(x[i]==x[j] && i!=j){
                scanf("%d", &x[i]);
                j=0;
            }
        }
    }
    for(i=0; i<m; i++){
        scanf("%d", &y[i]);
        for(j=0; j<i; j++){
            while(y[i]==y[j] && i!=j){
                scanf("%d", &y[i]);
                j=0;
            }
        }
    }
    
    Union(x, y, n, m);
    Intersection(x, y, n, m);

    return 0;
}
void Union(int x[], int y[], int n, int m){
    int i, j;
    int tamz=n, k=0, z[1000];
    
    printf("(");

    for(i=0; i<n; i++){
        z[i]=x[i];
    }
    for(i=0; i<m; i++){
        k=0;
        for(j=0; j<n; j++){
            if(y[i]==x[j]){
                k++;
            }
        }
        if(k==0){
            z[tamz]=y[i];
            tamz++;
        }
    }
    printf("%d", z[0]);
    for(i=1; i<tamz; i++){
        printf(",%d", z[i]);
    }
    printf(")\n");
}
void Intersection(int x[], int y[], int n, int m){
    int i, j, c=0, k;
    int z[1000];

    printf("(");
    for(i=0; i<m; i++){
        k=0;
        for(j=0; j<n; j++){
            if(x[j]==y[i]){
                k++;
            }
        }
        if(k>0){
            z[c]=y[i];
            c++;
        }
    }
    for(i=0; i<c; i++){
        printf("%d", z[i]);
        if(i<c-1){
            printf(",");
        }
    }
    printf(")\n");
}