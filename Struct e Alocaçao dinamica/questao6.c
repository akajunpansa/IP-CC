#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
    int mat, dia, mes, ano;
    char name[200];
    int peso;
}Date;
 
void Ordenation(Date *d, int t); 

int main(){
    Date *d=NULL;
    int t, i;

    scanf("%d", &t);
    d=(Date *)malloc(t*sizeof(Date));
    for(i=0; i<t; i++){
        scanf("%d", &(d[i].mat));
        scanf("%d", &(d[i].dia));
        scanf("%d", &(d[i].mes));
        scanf("%d", &(d[i].ano));
        scanf("%*c%[^\n]", (d[i].name));
        d[i].peso=d[i].ano*1100+d[i].mes*32+d[i].dia;
    }
    Ordenation(d, t);
    for(i=0; i<t; i++){
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", d[i].mat, d[i].name, d[i].dia, d[i].mes, d[i].ano);
    }
    free(d);
    return 0;
}
void Ordenation(Date *d, int t){
    int i, j, min, peso;
    Date aux;
    
    for (i=1; i<t; i++) {
        for (j=0; j<t-i; j++) {
            if (d[j].peso<d[j+1].peso) {
                aux=d[j];
                d[j]=d[j+1];
                d[j+1]=aux;
            }
        }
    }
}
