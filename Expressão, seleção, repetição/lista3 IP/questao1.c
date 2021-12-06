#include <stdio.h>
#define POP 1.0
#define GE 5.0
#define ARQ 10.0
#define CAD 20.0

int main() {
    double P, G, A, C;
    int T, p;
    double vp, vg, va, vc, som;
    int t;

    scanf("%d %d %lf %lf %lf %lf", &T, &p, &P, &G, &A, &C);
    vp=(p*P)/100.0;
    vg=(p*G)/100.0;
    va=(p*A)/100.0;
    vc=(p*C)/100.0;

    som=(vp*POP)+(vg*GE)+(va*ARQ)+(vc*CAD);
    
    printf("A RENDA DO JOGO N. 1 E = %.2lf\n", som);
    t=2;
    if(T>1){
        while(t<=T){
            scanf("%d %lf %lf %lf %lf", &p, &P, &G, &A, &C);
            vp=(p*P)/100.0;
            vg=(p*G)/100.0;
            va=(p*A)/100.0;
            vc=(p*C)/100.0;

            som=(vp*POP)+(vg*GE)+(va*ARQ)+(vc*CAD);
            printf("A RENDA DO JOGO N. %d E = %.2lf\n", t, som);
            t++;
        }
    }



    return 0;
}