#include <stdio.h>
#include <math.h>

int main(){
    double x, n;
    double y, z=1;
    double tay=1, fat=1, calc;

    scanf("%lf %lf", &x, &n);

    for(y=1;y<=n; y++){
        fat*=z;
        calc=pow(x,y)/fat;
        tay+=calc;
        z++;
    }
    printf("e^%.2lf = %lf\n", x, tay);
    return 0;
}