#include <stdio.h>

/**
 * @brief funcao que calcula quantos elemetnos unicos o vetor possui
 * 
 * @param x o vetor com os elementos
 * @param n a quantidade de elementos
 * @return o contador de elementos unicos
 */
int Count(int x[], int n);

int main(){
    int x[1000], n, i, c;

    scanf("%d", &n);
    for(i=0; i<n; i++){
    scanf("%d", &x[i]);
    }
    c=Count(x, n);
    printf("%d\n", c);

    return 0;
}
int Count(int x[], int n){
    int i, j, c=0, a;

    for(i=0;i<n;i++){
        a=0;
        for(j=0;j<n;j++){
            if(x[i] == x[j]){
                a++;
            }
        }
        if(a==1){
            c++;
        }
    }
    return c;
}