#include <stdio.h>

#define N 6

int tabela[N][N] = {     {   0 ,  63 , 210 , 190 ,  -1 , 190},
                         {  63 ,   0 , 160 , 150 ,  95 ,  10},
                         { 210 , 160 ,   0 ,  10 ,   1 ,  10},
                         { 190 , 150 ,  10 ,   0 ,  10 ,  20},
                         {  10 ,  95 ,   7 ,  21 ,   0 ,  80},
                         { 190 ,   2 ,  -1 ,  41 ,  80 ,   0},};

int calculo(int x[], int t);

int main(){
    int i, j, t, c;
    int x[100];
    
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &x[i]);
    }
    c=calculo(x, t);
    if(c==-1){
        printf("rota invalida!\n");
    }
    else{
        printf("%d\n", c);
    }
    return 0;
}
int calculo(int x[], int t){
    int i, j, total=0, k, l;

    for(i=0; i<t; i++){
        if(i>0){
            total+=tabela[x[i-1]][x[i]];
            if(tabela[x[i-1]][x[i]]==-1){
                return -1;
            }
        }
    }
    return total;
}