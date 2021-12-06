#include <stdio.h>

/**
 * @brief funcao que cataloga se é vogal 
 * 
 * @param c o caractere a ser analizado
 * @return um valor para cada tipo
 */
int vowelCount(char c);
/**
 * @brief funcao que imprime letras/consoantes/vogais
 * 
 * @param x as strings a serem analizadas
 */
void Letters(char x[]);

int main() {
    int n; 

    scanf("%d", &n);
    while(n--){
        scanf("%*c%[^\n]", x);
        Letters(x);
    }
    return 0;
}
int vowelCount(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        return 1;
    else if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        return 0;
    }
        return -1;
}
void Letters(char x[]){
    int a=0, b=0, val, i;  

    for(i=0; x[i]!='\0'; i++){
    val=vowelCount(x[i]);
    if(val==1){
        a++;
    }
    else if(val==0) {
        b++;
    }
    }
    printf("Letras = %d\n", a+b);
    printf("Vogais = %d\n", a);
    printf("Consoantes = %d\n", b);
}