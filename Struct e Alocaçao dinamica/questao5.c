#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
    int code;
    float credit;
    char school[100];
} Uni;
typedef struct {
    char name[500];
    int mat;
    int cred;
} Students;

int main(){
    Uni *u=NULL;
    Students *s=NULL;
    int t, k,  i, j;

    scanf("%d", &t);
    u=(Uni*)malloc(t*sizeof(Uni));
    for(i=0; i<t; i++){
        scanf("%d", &(u[i].code));
        scanf("%f", &(u[i].credit));
        scanf("%*c%[^\n]", (u[i].school));
    }
    scanf("%d", &k);
    s=(Students*)malloc(k*sizeof(Students));
    for(i=0; i<k; i++){
        scanf("%*c%[^\n]", s[i].name);
        scanf("%d", &(s[i].mat));
        scanf("%d", &(s[i].cred));  
    }
    for(i=0; i<k; i++){
        for(j=0; j<k; j++){
            if(s[i].mat==u[j].code){
                printf("Aluno(a): %s ", s[i].name);
                printf("Curso: %s ", u[j].school);
                printf("Num. Creditos: %d ", s[i].cred);
                printf("Valor Credito: %.2f ", u[j].credit);
                printf("Mensalidade: %.2f\n", s[i].cred*u[j].credit);
            }
        }
    }

    free(u);
    free(s);

    return 0;
}