#include <stdio.h>
#include <string.h>
 
#define N 300

/**
 * @brief funcao que elimina os caracteres
 * 
 * @param x string completo
 * @param y caracteres a serem eliminados
 */
void Str_clean(char x[], char y[]);
 
int main(){
    char str[N]; 
    char clr[N]; 
   
    scanf("%[^\n]", str);
    scanf("\n%[^\n]", clr);
    Str_clean(str, clr);
 
    return 0;
}
void Str_clean(char x[], char y[]){
    int i, j, t, u;
   
    t=strlen(x);
    u=strlen(y);
    
    for(i=0; x[i]!='\0'; i++){
        for(j=0; x[j]!='\0'; j++){
            if(x[i]==y[j]){
                x[i]='@';
            }
        }
    }
    for(i=0; x[i]!='\0'; i++){
        if(x[i]!='@'){
            printf("%c", x[i]);
        }
    }
    printf("\n");
}