#include <stdio.h>
#include <math.h>
int main() {
 
    float h;
    float a;
    float area_x;
    float area_p;
    
    scanf("%f %f", &h, &a);
    area_x= (3*a*a*sqrt(3))/2.0;
    area_p= 1/3.0*area_x*h;
    
    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", area_p);
    
    return 0;
    }
    
