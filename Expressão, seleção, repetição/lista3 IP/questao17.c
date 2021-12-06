#include <stdio.h>
int main() {
    double n;
    double e, lim_erro;
    double r0;

    scanf("%lf %lf", &n, &e);
    
    r0=1;
    lim_erro=n-r0*r0;

    while(lim_erro>e){
        r0=(r0+(n/r0))/2;
        lim_erro=n-r0*r0;
        if(lim_erro<0)
        lim_erro*=-1;
        printf("r: %.9lf, err: %.9lf\n", r0, lim_erro);
    }
    
  return 0;  
}