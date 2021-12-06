#include <stdio.h>

/**
 * @brief funcao que preenche o vetor z, e o reordena no vetor a, e o imprime.
 * 
 * @param x vetor A
 * @param y vetor B
 * @param m tamanho de A
 * @param n tamanho de B
 */
void Intercale(int x[], int y[], int m, int n);
void CoutingSort(int x[], int t);

int main(){
    int t1, t2, i;
    int x[2000], y[2000];

    scanf("%d %d", &t1, &t2);
    for(i=0; i<t1; i++){
        scanf("%d", &x[i]);
    }
    for(i=0; i<t2; i++){
        scanf("%d", &y[i]);
    }
    Intercale(x, y, t1, t2);

    return 0;
}
void Intercale(int x[], int y[], int m, int n){
    int i, j, k, menor, ind, l=0;
    int z[2000], a[2000];

    k=0;
    CoutingSort(x, m);
    CoutingSort(y, n);
    for(i=0; i<m; i++){
        printf("%d\n", x[i]);
    }
    for(i=0; i<n; i++){
        printf("%d\n", y[i]);
    }

    for(i=0; i<m+n; i++){
        if(x[0]<y[0]){
            if(l<m && i%2==0){
                z[i]=x[l];
                l++;
            }
            if(i%2==1){
                z[i]=y[k];
                k++;
            }
        }
        else{
            if(l<m && i%2==1){
                z[i]=x[l];
                l++;
            }
            if(i%2==0){
                z[i]=y[k];
                k++;
            }
        }
    }
    for(i=0; i<n+m; i++){
        printf("%d\n", z[i]);
    }
}
void CoutingSort(int x[], int t){
    int i, menor, ind, j;
    int y[1000];

    for(i=0; i<t; i++){
        menor=1001;
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
        x[i]=y[i];
    }
}