#include <stdio.h>
int main() {
    int n;
    int x=1;
    int soma=0;
    int count=0;

    scanf("%d", &n);
    
    printf("%d = ", n);

    while(x<n){
        if(n%x==0){
            count++;
        }     
        x++;
    }

    x=1;

    while(x<n){
        if(n%x==0){
            soma+=x;
            printf("%d ", x);
            if(--count)
                printf("+ ");
        }     
        x++;
    }

    if(soma==n){
        printf("= %d (NUMERO PERFEITO)\n", soma);
    } else {
        printf("= %d (NUMERO NAO E PERFEITO)\n", soma);
    }
    return 0;
}