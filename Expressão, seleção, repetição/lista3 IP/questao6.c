#include <stdio.h>
int main () {
    int k, n, n1;
    float x, s, y;
    double som;


    scanf("%d", &n);

    y=0;
    s=1;
    k=1;
    
    if(n<=1)   
     printf("Numero invalido!\n");
   
    else {
    while(k<=n){
    x=s/k;
    som=y+=x;
    k++;
    }
    printf("%.6lf\n", som);
    }   
    return 0;
}