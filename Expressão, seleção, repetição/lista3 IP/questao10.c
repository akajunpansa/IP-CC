#include <stdio.h>
int main() {
    float n, i, k, s;
    float o1, o2, o3, o4;
    float a, x;

    scanf("%f %f %f %f", &n, &i, &k, &s);

    x=0;
    printf("Tabuada de soma:\n");
    while(x<k){
    a=i+(x*s);
    o1=n+a;
    printf("%.2f + %.2f = %.2f\n", n, a, o1);
    x++;
    } 
    x=0;
    printf("Tabuada de subtracao:\n");
    while(x<k){
    a=i+(x*s);
    o2=n-a;
    printf("%.2f - %.2f = %.2f\n", n, a, o2);
    x++; 
    }
    x=0;
    printf("Tabuada de multiplicacao:\n");
    while(x<k){
    a=i+(x*s);
    o3=n*a;
    printf("%.2f x %.2f = %.2f\n", n, a, o3);
    x++;
    } 
    x=0;
    printf("Tabuada de divisao:\n");
    while(x<k){
    a=i+(x*s);
    o4=n/a;
    printf("%.2f / %.2f = %.2f\n", n, a, o4);
    x++;
    }
    
    return 0;
}