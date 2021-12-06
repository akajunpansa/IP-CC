#include <stdio.h>
int main () {
    double c, f;
    int n;
    int g;
    
    scanf("%d", &n);

    g=1;
    while(g<=n){
        scanf("%lf", &f); 
        c=(5*(f-32))/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", f, c);
        g++;
    }
    return 0;
}