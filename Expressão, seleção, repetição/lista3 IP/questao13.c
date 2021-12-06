#include <stdio.h>
int main () {
    int n;
    double par, impar;
    double cpar, cimp;
    double mimp, mpar;

    n=0;
    impar=0;
    par=0;
    cpar=0;
    cimp=0;

    scanf("%d", &n);
    while(n!=0){
        if(n%2==0){
            par+=(double)n;
            cpar++;
        } else {
            impar+=(double)n;
            cimp++;
        }
        scanf("%d", &n);
    }
    if(cimp<1){
        cimp=1;
    }
    if(cpar<1){
        cpar=1;
    }
    mimp=impar/cimp;
    mpar=par/cpar;
    printf("MEDIA PAR: %lf\n", mpar);
    printf("MEDIA IMPAR: %lf\n", mimp);
    
    return 0;
}