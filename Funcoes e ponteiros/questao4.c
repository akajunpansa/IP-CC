#include <stdio.h>
/**
 * @brief função que diz quais numeros são perfeitos
 * 
 * @param n o numero a ser analisado
 * @return os divisores e se ele é perfeito ou não
 */
int num_perfeito(int n);

int main(){
    int p, n, soma;
    scanf("%d", &n);
    printf("%d = ", n);
    p=num_perfeito(n);
    printf(" = %d ", n);
    if(p==n){
        printf("(NUMERO PERFEITO)\n");
    }else{
        printf("(NUMERO NAO E PERFEITO)\n");
    }
    
    return 0;
}

int num_perfeito(int n){
    int x=1, count=0, soma=0;
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
    
    return soma;
}
