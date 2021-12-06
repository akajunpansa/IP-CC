#include <stdio.h>

/**
 * @brief funcao que calcula qual elemento apareceu com mais frequencia
 * 
 * @param x os elementos a serem avaliados
 * @param tamanho a quantidade de elementos
 */
void Frequency(int x[], int tamanho);

int main() {
    int x[1000000], n, i;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    Frequency(x, n);
    printf("\n");

    return 0;
}
void Frequency(int x[], int tamanho){
    int i;
    int c=0, d=0;
    int freq[101];
    
    for(i=0; i<101; i++){
        freq[i]=0;
    }

    for(i=0; i<tamanho; i++){
        freq[x[i]]++;
        if(freq[c]<freq[x[i]]){
            c=x[i];
        }
        else if(freq[c]==freq[x[i]]){
            if(x[i]<c){
                c=x[i];
            }
        }
    }
    printf("%d\n", c);
    printf("%d\n", freq[c]);  
}