#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
typedef struct{
    int casa, gasto;
    float custo;
}Cidade;
 
void Ordenation(Cidade *num, int tam);
 
int main(){
    Cidade *c=NULL;
    int t, i, k=1, den=0, num=0;
    
    while(1){
        scanf("%d", &t);
        c=(Cidade *)malloc(t*sizeof(Cidade));
        if(t==0){
            return 0;
        }
        for(i=0; i<t; i++){
            scanf("%d %d", &(c[i].casa), &(c[i].gasto));
        }
        Ordenation(c, t);
        printf("Cidade# %d:\n", k);
        for(i=0; i<t; i++){
            printf("%d-%d ", c[i].casa, c[i].gasto/c[i].casa);
            num+=c[i].casa;
            den+=c[i].gasto;
        }
        printf("\n");
        c[k].custo=den/(float)num;
        printf("Consumo medio: %.2f m3.\n", c[k].custo);
        printf("\n");
        free(c);
        k++;
    }
    return 0;
}
void Ordenation(Cidade *num, int tam){
    int i, j, min;
    Cidade aux;
 
    for(i=0; i<tam; i++){
        min=tam;
        for(j=i+1; j<tam; j++){
            if(num[i].gasto/num[i].casa>num[j].gasto/num[j].casa){
                min=j;
                if (i != min) {
                    aux = *(num+i);
                    *(num+i) = *(num+min);
                    *(num+min) = aux;
                }
            }
        }
    }
}