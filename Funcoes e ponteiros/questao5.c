#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define RAIZ_DUPLA 1
#define RAIZ_UNICA 2
#define RAIZ_IM 3

/**
 * @brief função que calcula as raizes da equação do 2° grau
 * 
 * @param a valor de a
 * @param b valor de b
 * @param c valor de c
 * @param x1 a primeira raiz da equação
 * @param x2 a segunda raiz da equação
 * @return retorna o valor das 2 raizes, caso destintas,de uma, caso única, e de nenhuma caso imaginaria.
 */
int raizes (double a, double b, double c, double * x1, double * x2);

int main() {
    double a, b, c, x1, x2, tmp;
    int d;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    d=raizes(a, b, c, &x1, &x2);
    if(d==1){
        if(x1>x2){
            tmp=x1;
            x1=x2;
            x2=tmp;
        }
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
    }
    else if(d==2){
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);
    }
    else{
        printf("RAIZES IMAGINARIAS\n");
    }
    return 0;
}

int raizes (double a, double b, double c, double * x1, double * x2){
    double delta, tmp;
    
    delta=b*b-4*a*c;
    if(a==0) {
		if(b!=0)
            *x1 = -c/b;
		else 
            *x1 = 0;
		return RAIZ_UNICA;
	}
    if(delta>0){
        *x1=(-b+sqrt(delta))/(2*a);
        *x2=(-b-sqrt(delta))/(2*a);
        return RAIZ_DUPLA;
    }
    else if(delta==0){
       *x1=-b/(2*a);
        return RAIZ_UNICA;
    }
    else{
        return RAIZ_IM;
    }
}
