#include <stdio.h>

void True_dwarves(int A[], int A_real[]);
void CoutingSort(int num[], int tam);

int main(){
    int t, i;
    int A[9], A_real[7]; 

    scanf("%d", &t);
    while(t--){
        for(i=0; i<9; i++){
            scanf("%d", &A[i]);
        }
        True_dwarves(A, A_real);
    }
    printf("\n");
    return 0;
}
void True_dwarves(int A[], int A_real[]){
    int i, j, l, k, som=0, aux=0;
    int p1, p2;

    for (i = 0; i < 9 && aux!=1; i++){
        for (j = 0; j<9 && aux!=1;  j++){
            som=0;
            if(i==j){
                continue;
            }
            for(k=0; k<9; k++){
                if(k==i || k==j){
                    continue;
                }
                    som+=A[k];
            }
            if(som==100){
                p1=i;
                p2=j;
                aux=1;                
            }
        }
    }
    j=0;
    for(i=0; i<9; i++){
        if(A[i]!=A[p1] && A[i]!=A[p2]){
            A_real[j]=A[i];
            j++;
        }
    }
    CoutingSort(A_real, j);
}
void CoutingSort(int x[], int t){
    int i, menor, ind, j;
    int y[7];

    for(i=0; i<t; i++){
        menor=100;
        for(j=0; j<t; j++){    
            if(x[j]<menor && x[j]!=-1){
                menor=x[j];
                ind=j;
            }
        }
        y[i]=menor;
        x[ind]=-1;
    }
    for(i=0; i<t; i++){
        printf("%d\n", y[i]);
    }
}