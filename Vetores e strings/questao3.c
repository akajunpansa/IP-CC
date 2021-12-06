#include <stdio.h>


/**
 * @brief funcao que imprime os numeros diz quais são pares
 * 
 * @param p os numeros pares
 * @return 
 */
void pares(int n);

int main() {
    int n, p;

    scanf("%d", &n);

    pares(n);
    printf("\n");

    return 0;
}

void pares(int n){
    int i, p[1000], c=0;
    for(i=1; i<=n; i++){
        scanf("%d", &p[i]);
        if(p[i]%2==0){
            printf("%d ", p[i]);
            c++;
        }
    }
    printf("%d", c);

}