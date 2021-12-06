#include <stdio.h>

#define N 1000

int minor(int M[][N], int n, int m);

int Frequency_minor(int M[][N], int n, int m, int menor);

int major(int M[][N], int n, int m);

int Frequency_major(int M[][N], int n, int m, int maior);

int main(){
    int i, j, n, m;
    int M[N][N];
    int menor, maior, freq_ma, freq_me, mat;
    double perc_ma, perc_me;

    scanf("%d %d", &n, &m);

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &M[i][j]);
        }
    }
    menor=minor(M, n, m);
    freq_me=Frequency_minor(M, n, m, menor);
    maior=major(M, n, m);
    freq_ma=Frequency_major(M, n, m, maior);

    mat=n*m;

    perc_me=(double)freq_me*100/(double)mat;
    perc_ma=(double)freq_ma*100/(double)mat;

    printf("%d %.2lf%%\n", menor, perc_me);
    printf("%d %.2lf%%\n", maior, perc_ma);
    
    return 0;
}
int minor(int M[][N], int n, int m){
    int i, j, menor=1001, c=0;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(M[i][j]<menor){
                menor=M[i][j];
            }
        }
    }
    return menor;
}
int Frequency_minor(int M[][N], int n, int m, int menor){
    int i, j, c=0;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(M[i][j]==menor){
                c++;
            }
        }
    }
    return c;
}
int major(int M[][N], int n, int m){
    int i, j, maior=-1, c=0;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(M[i][j]>maior){
                maior=M[i][j];
            }
        }
    }
    return maior;
}
int Frequency_major(int M[][N], int n, int m, int maior){
    int i, j, c=0;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(M[i][j]==maior){
                c++;
            }
        }
    }
    return c;
}