#include <stdio.h>

double Absolute(double x[], double  y[]);

int main(){
    double x[1000], y[1000], t[1000];
    int n, i, j;
    double z;

    scanf("%d", &n);

    for(i=0; i<3; i++){
        scanf("%lf", &x[i]);
    }
    for(j=0; j<3; j++){
        scanf("%lf", &y[j]);
    }
    z=Absolute(x, y);
    printf("%.2lf\n", z);

    while(n-2>0){
        for(i=0; i<3; i++){
            x[i]=y[i];
        }
        for(j=0; j<3; j++){
            scanf("%lf", &y[j]);
        }
        z=Absolute(x, y);
        printf("%.2lf\n", z);
        n--;
    }
    return 0;
}

double Absolute(double x[], double  y[]){
    int i;
    double z[100], maior, menor;

    for(i=0; i<3; i++){
        z[i]=0;
    }
    for(i=0; i<3; i++){
        z[i]=x[i]-y[i];
    }
    maior=z[i-1];
    menor=z[i-1];
      for(i=0; i<3; i++){
        if(z[i]>maior){
            maior=z[i];
        }
        if(z[i]<menor){
            menor=z[i];
        }
    }
    if(menor<0){
        menor *=-1;
    }
    if(menor>maior){
        maior=menor;
    }
    return maior;
}