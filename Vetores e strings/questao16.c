#include <stdio.h>
#include <string.h>

/**
 * @brief funcao que imprime o prefixo
 * 
 * @param n tamanho do prefixo a ser impresso
 * @param x a string a ser impressa
 */
void Prefix(int n, char x[]);

int main(){
    int n, m, i;
    char x[499], s;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &m);
        scanf("%*c%[^\n]", x);
        Prefix(m, x);
    }
}
void Prefix(int n, char x[]){
    int i, tamanho;

    tamanho=strlen(x);
    for(i=0; i<n && i<tamanho; i++){
        printf("%c", x[i]);        
    }
    printf("\n");
}