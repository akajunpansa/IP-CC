#include <stdio.h>

/**
 * @brief funcão que valida os CPFs
 * 
 * @param x vetor que recebe os digitos do CPF
 * @return 1 para CPF valido, e 0 caso seja invalido
 */
int Cpf(int x[]);

int main(){
    int a;
    int x[100], n, i;

    scanf("%d", &n);
    while(n--){
        for(i=0; i<11; i++){
            scanf("%d", &x[i]);
           
        }
        a=Cpf(x);
           if(a==1){
               printf("CPF valido\n");
           }
           else{
               printf("CPF invalido\n");
           }
    }
    return 0;
}
int Cpf(int x[]){
    int i, t=0;

    for(i=0; i<11; i++){
        t+=x[i];
    }
    if(t%11==0){
        return 1;
    }
    else{
        return 0;
    }

}