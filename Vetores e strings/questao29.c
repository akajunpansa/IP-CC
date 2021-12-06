#include <stdio.h>


void p_Vect( int Y[] , int n);

int main(){
    int n, d, Y[100000], i, j, x, e, tmp, dd;

    while(1){
        
        x = 0;
        tmp = -1;

        scanf("%d %d \n", &n, &d);
        
        if(n == 0 || d == 0) return 0;
        
        p_Vect(Y,n);
        
        dd = d;
        
        for(j = 0 ; j < d ; j++){
            for(i = x ; i <= n-dd ; i++){
                if(Y[i] > tmp){
                    tmp = Y[i];
                    x = i+1;
                }
            }
            printf("%d", tmp);
            tmp = -1;
            dd--;
        }
        printf("\n");
    }

    return 0;
}
void p_Vect( int Y[] , int n){

    int i, z = 0;
    char x[100000];

    scanf("%[^\n]%*c", x);

    for (i = 0 ; i < n ; i++){
        Y[i] = (x[i] - 48);
    }
}
    