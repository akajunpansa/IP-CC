#include <stdio.h>

/**
 * @brief funcao que calcula a quantidade de aliteracoes na string
 * 
 * @param x a string a ser analisada
 * @return o numero de aliteracoes
 */
int Alliteration(char x[]);

int main(){
    char x[10000];
    int n, c;

    while(scanf("%[^\n]%*c", x)!=EOF){
        c=Alliteration(x);
        printf("%d\n", c);
    }

    return 0;
}
int Alliteration(char x[]){
    int i, c=0, a=0, caract;

    


    for(i=0; x[i]!='\0'; i++){
        x[i]=x[i] | 32;
    }
    caract=x[0];
    for(i=0; x[i]!='\0'; i++){
        if(x[i-1] == ' ' && i != 0){
            if(x[i]==caract){
                if(c==0){
                    a++;
                }
                c++;
                }
            else{
                c=0;
                caract=x[i];
            }
        }       
    }
    return a;
}