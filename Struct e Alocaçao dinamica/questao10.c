#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
    float n;
    int pot;
} Polinomio;

Polinomio* sum(Polinomio *p1, Polinomio *p2, int t1, int t2);
Polinomio* sub(Polinomio *p1, Polinomio *p2, int t1, int t2);
void Selection(Polinomio *p1, int tam);

int main(){
    Polinomio *p1=NULL;
    Polinomio *p2=NULL;
    Polinomio *p3=NULL;
    int i, j, t, tam1, tam2, maior;
    char sin;

    scanf("%d", &t);
    while(t--){
        scanf("%*c%c", &sin);
        scanf("%d", &tam1);
        p1=(Polinomio*)malloc(tam1*sizeof(Polinomio));
        for(i=0; i<tam1; i++){
            scanf("%f %d", &(p1[i].n), &(p1[i].pot));
        }
        scanf("%d", &tam2);
        p2=(Polinomio*)malloc(tam2*sizeof(Polinomio));
        for(i=0; i<tam2; i++){
            scanf("%f %d", &(p2[i].n), &(p2[i].pot));
        }
        if(sin=='+'){
            p3=sum(p1, p2, tam1, tam2);
        }
        else{
            p3=sub(p1, p2, tam1, tam2);
        }
        Selection(p3, tam1+tam2);
        for(i=0; i<tam1+tam2; i++){
            if(p3[i].pot!=0 && p3[i].n!=0){
                if(p3[i].n>0){
                    printf("+");
                }
                printf("%.2lfX^%d", p3[i].n, p3[i].pot);
            }
            if(p3[i].pot==0 && p3[i].n!=0){
                if(p3[i].n>0){
                    printf("+1.00");
                }
                else{
                    printf("-1.00");
                }
            }

        }
        printf("\n");
        free(p1);
        free(p2);
        free(p3);
    }
    
    return 0;
}
Polinomio* sum(Polinomio *p1, Polinomio *p2, int t1, int t2){
    int i, j=0, maior, menor, c1=0, c2; 
    Polinomio *result;
    
    maior=t1;
    menor=t2;
    if(maior<menor){
        maior=menor;
        menor=t1;
    }
    result=(Polinomio*)calloc((t1+t2),sizeof(Polinomio));
    for(i=0; i<t1+t2; i++){
        if(i<t1){
            result[i].pot=p1[i].pot;
            result[i].n=p1[i].n;
        }
        else{
            result[i].pot=p2[j].pot;
            result[i].pot=p2[j].n;
            j++;
        }
        
    }
    for(i=0; i<t1+t2; i++){
        for(j=(t1+t2)-1; j>0; j++){
            if(p2[j].pot==result[i].pot){
                result[i].n+=p2[j].n;
            }
        }
    }
    for(i=0; i<menor; i++){
        for(j=0; j<menor; j++){
            if(p2[j].pot==result[i].pot){
                result[i].n+=p2[j].n;
            }
        }
    }
    return result;
}
Polinomio* sub(Polinomio *p1, Polinomio *p2, int t1, int t2){
    int i, j, maior, menor; 
    Polinomio *result;
    
    maior=t1;
    menor=t2;
    if(t2>maior){
        maior=t2;
        menor=t1;
    }
    result=(Polinomio*)calloc((t1+t2),sizeof(Polinomio));
    for(i=0; i<maior; i++){
        result[i].pot=p1[i].pot;
        result[i].n=p1[i].n;
    }
    for(i=0; i<maior; i++){
        for(j=0; j<menor; j++){
            if(result[i].pot==p2[j].pot){
                result[i].n+=p2[j].n;
            }
        }
    }
    return result;
}
void Selection(Polinomio *p1, int tam){
    int i, j, min;
    Polinomio aux;

    for (i = 0; i<tam; i++){
        for (j=i+1; j<tam; j++){
            if(p1[j].pot > p1[i].pot){ 
                aux = p1[i];
                p1[i] = p1[j];
                p1[j] = aux;
            }
        }
    }
}