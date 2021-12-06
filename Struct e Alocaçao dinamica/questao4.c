#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Vector{
    double u, x, y, z;
    double norma;
};
typedef struct Vector Mod; 

void selection_sort(Mod *num, int tam);

int main(){
    double u, x, y, z;
    int t, i=0, k=0, j, min;
    double aux;
    Mod *r=NULL;

    scanf("%d", &t);
    r=(Mod*)malloc(t*sizeof(Mod));
    while(t--){
        scanf("%lf %lf %lf %lf", &(r[i].u), &(r[i].x), &(r[i].y), &(r[i].z));
        r[i].norma=sqrt(pow(r[i].u,2)+pow(r[i].x, 2)+pow(r[i].y,2)+pow(r[i].z, 2));
        k++;
        i++;
       
    }
    selection_sort(r, k);
    for(i=0; i<k; i++){
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", r[i].u, r[i].x, r[i].y, r[i].z, r[i].norma);
    }
    free(r);
    return 0;
}
void selection_sort(Mod *num, int tam){
  int i, j, min;
  Mod aux;

  for (i = 0; i < (tam-1); i++) 
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if((num+j)->norma < (num+min)->norma) 
        min = j;
     }
     if (i != min) {
       aux = *(num+i);
       *(num+i) = *(num+min);
       *(num+min) = aux;
    }
  }
}