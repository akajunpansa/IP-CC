#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct market{
    char frutas[15];
    float preco;
    int qtde;  
    char c_frutas[15];  
    float result;
};
typedef struct market Store; 

int main(){
    int i, t, n, j, l;
    float k, valor=0;
    Store *m=NULL;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        m=(Store*)malloc(n*sizeof(Store));
        for(i=0; i<n; i++){
            scanf("%s %f", m[i].frutas, &m[i].preco);
        }
        scanf("%d", &j);
        for(i=0; i<j; i++){
            scanf("%s %d", m[i].c_frutas, &m[i].qtde);
        }
        m->result=0;
        for(i=0; i<n; i++){
            for(l=0; l<n; l++){
                if(strcmp(m[i].frutas, m[l].c_frutas)==0){
                    m->result+=m[i].preco*m[l].qtde;
                }
            }
        }
        printf("R$ %.2f\n", m->result);
        free(m);
    }
    return 0;
}   
