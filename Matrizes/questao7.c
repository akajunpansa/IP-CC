#include <stdio.h>

#define N 6

/**
 * @brief funcao que calcula o valor da ampulheta
 * 
 * @param A a  matriz que representa a ampulheta
 * @return o valor da ampulheta
 */
int Hourglass(int A[][N]);

int main(){
    int i, j, maior=-63;
    int A[N][N];

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            scanf("%d", &A[i][j]);
        }
    }
    maior=Hourglass(A);
    printf("%d\n", maior);

    return 0;
}
int Hourglass(int A[][N]){
    int i, j, maior=-63, amp;

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(j<4 && i<4){
                amp=A[i][j]+A[i][j+1]+A[i][j+2]+A[i+1][j+1]+A[i+2][j]+A[i+2][j+1]+A[i+2][j+2];
                if(amp>maior){
                    maior=amp;
                }
            }
        }
    }
    return maior;
}