#include <stdio.h>
#include <math.h>

/**
 * @brief funcao que converte os valores para binario
 * 
 * @param x valor a ser convertido
 */
void Binary(int x);

int main() {
    int x;

    while(scanf("%d", &x)!=EOF){
        if(x==0){
            printf("0\n");
        }
        else{
        Binary(x);
        }
    }
    return 0;

}
void Binary(int x){
    int i, a[32], t;

    for(i=0; x>0; i++){
        a[i]=x%2;
        x/=2;   
    }
    for(t=i-1; t>=0; t--){
        printf("%d", a[t]);
    }
    printf("\n");
}