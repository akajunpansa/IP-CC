#include <stdio.h>

#define NL 2
#define NC 2

void Square(float x[][2]); 

int main(){
    float x[NL][NC];
    int i, j, n=0;

    for(i=0; i<NL; i++){
        for(j=0; j<NC; j++){
           scanf("%f", &(x[i][j]));
        }
    }
    Square(x);


    return 0;
}
void Square(float x[][2]){
    float mult[NL][NC];
    int i, j;
    
    mult[0][0]=x[0][0]*x[0][0]+x[0][1]*x[1][0];
    mult[0][1]=x[0][1]*x[0][0]+x[0][1]*x[1][1];
    mult[1][0]=x[1][0]*x[0][0]+x[1][0]*x[1][1];
    mult[1][1]=x[1][1]*x[1][1]+x[1][0]*x[0][1];

    for(i=0; i<NL; i++){
        for(j=0; j<NC; j++){
            if(mult[i][j]+1==1) mult[i][j] =0;
            printf("%.3f ", mult[i][j]);
        }
        printf("\n");
    }
}