#include <stdio.h>

/**
 * @brief funcao que verifica se o caracter existe na lista
 * 
 * @param x a lista a ser avaliada
 * @param a o caractere a ser procurado
 */
int Find_char(char x[], char a);

int main(){
    int n, k;
    char a, x[499];

    scanf("%d%*c", &n);
    while(n--){
        scanf("%c%*c%[^\n]%*c", &a, x);
        k=Find_char(x, a);
        if(k==-1){
            printf("Caractere %c nao encontrado.\n", a);
        }
        else{
            printf("Caractere %c encontrado no indice %d da string.\n", a, k);
        }

    }

    return 0;
}
int Find_char(char x[], char a){
    int i;

    for(i=0; x[i]!='\0'; i++){   
        if(x[i]==a){
          return i;
        }
    }
    return -1;     
}
