#include <stdio.h>
#include <string.h>

/**
 * @brief funcao que ler os digitos e imprime o resultado
 * 
 * @param x vetor que ler e o compara todos os valores do segmentos
 */
void Codify(char x[]);

int main(){
    int n;
    char x[50];

    scanf("%d", &n);

    while(n--){
        getchar();
        scanf("%[^\n]", x);
        Codify(x);
    }
    return 0;
}


void Codify(char x[]){
    int i, j;
    char y;
    
    for(i=0; x[i]!='\0'; i++){
        if((x[i]>=97 && x[i]<=122) || (x[i]>=65 && x[i]<=90)){
            x[i]= x[i]+3;
   
        }
    } 
    j=strlen(x)-1;
    for(i=j; i>=0; i--){
        if(i<=j/2){
            x[i]=x[i]-1;
        }
            printf("%c", x[i]);

        }   
    
    printf("\n");
    }