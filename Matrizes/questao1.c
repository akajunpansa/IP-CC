#include <stdio.h>

#define NL 2
#define NC 2
int main(){
    double D[NL][NC];
    int i, j;
    double det;

    for(i=0; i<NL; i++){
        for(j=0; j<NC; j++){
            scanf("%lf", &(D[i][j]));
    }
    }
    det=(D[0][0]*D[1][1])-(D[0][1]*D[1][0]);
    printf("%.2lf\n", det);
    return 0;
}