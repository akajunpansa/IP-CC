#include <stdio.h>

/**
 * @brief funcao que imprime os numeros de n invertido
 * 
 * @param n numeros
 */
void impressor(int n);

int main(){
    
    int n[5000], x;
    
    scanf("%d", &x);
    impressor(x);
    printf("\n");
    
    return 0;

}
void impressor(int n){
    int i, x[5000];
    for(i=1; i<=n; i++){
        scanf("%d", &x[i]);
    }
    for(i=n; i>=1; i--){
        printf("%d ", x[i]);
    }
}
