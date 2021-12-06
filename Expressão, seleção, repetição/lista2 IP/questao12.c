#include <stdio.h>
#include <math.h>

int main () {
    float a, b, c;
    float delta;
    float x1, x2;

    scanf("%f %f %f", &a, &b, &c);

        delta = (b*b)-4*a*c;
   
    if(delta>0){
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        printf("RAIZES DISTINTA\n");
        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
    } else if(delta==0){
        x1 =(-b+sqrt(delta))/(2*a);
        printf("RAIZ UNICA\n");
        printf("X1 = %.2f\n", x1);
    } else{
        printf("RAIZES IMAGINARIAS\n");
    }
   
    return 0;
}