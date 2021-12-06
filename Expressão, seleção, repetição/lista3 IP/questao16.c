#include <stdio.h>
int main () {
    int mat;
    double horas, valor;
    double x, w, y, z;

    
    while(1){
    scanf("%d %lf %lf", &mat, &horas, &valor);
    getchar();
    if (mat==0 && horas==0 && valor==0)    {
        break;
    }
        x=horas*valor;
            printf("%d %.2lf\n", mat, x);

    }
    
    return 0;
}