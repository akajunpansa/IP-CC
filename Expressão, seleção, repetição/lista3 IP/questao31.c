#include <stdio.h>
#include <math.h>

int main(){
    double x, n;
    int y, z=0;
    double tay=0, fat=1, calc;
    int a=1;

    scanf("%lf %lf", &x, &n);

    for(y=0;y<=2*n; y++){
        if(z!=0)
        fat*=z;
        if(y%2==0){
        calc=pow(x,y)/fat*a;
        a*=-1;
        tay+=calc;
        }
        z++;
    }
    printf("cos(%.2lf) = %lf\n", x, tay);
    return 0;
}