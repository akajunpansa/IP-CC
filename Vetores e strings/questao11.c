#include <stdio.h>

/**
 * @brief funcao que calcula e compara os valores
 * 
 * @param x vetor a qual vai comparar o segmento
 * @param tamanho quantidade de elementos
 */
void Bigger(int x[], int tamanho);

int main(){
    int n, i, x[9999];

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    Bigger(x, n);
    return 0;
}
void Bigger(int x[], int tamanho){
    int i;
    int maior=0, ind, c=0, y;
    
    for(i=0; i<tamanho; i++){
        if(x[i]>maior){
            maior=x[i];
            ind=i;
        }

        if(x[i]==x[tamanho-1]){
            c++;
        }
    }
    y=x[tamanho-1];
    printf("Nota %d, %d vezes\nNota %d, indice %d\n", y, c, maior, ind);
}