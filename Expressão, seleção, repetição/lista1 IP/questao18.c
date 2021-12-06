#include <stdio.h>
int main() {
    float a, b, c, d, e, f;
    float x, y, z;

    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    
    z = a/d;
    y = (f*z-c)/(e*z-b);
    x = (c-b*y)/a;
   
    printf("O VALOR DE X E = %.2f\n", x);
    printf("O VALOR DE Y E = %.2f\n", y);
    
    return 0;
}