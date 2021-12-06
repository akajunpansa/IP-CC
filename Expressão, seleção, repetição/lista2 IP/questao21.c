#include <stdio.h>
int main() {
    float a, b, c;
    float n1, n2, n3, n4, n5, n6;
    float per, area;
    
    scanf("%f %f %f", &a, &b, &c);
    
    n1 = b-c;
    n2 = a-c;
    n3 = a-b;
    n4 = b+c;
    n5 = a+c;
    n6 = a+b;
    
    per=a+b+c;
    area=((a+b)*c)/2.0;
    
    if(n1<0){
        n1*-1;
    }  if(n2<0){
        n2*-1;
    }  if(n3<0){
        n3*-1;
    } if(n1<a && a<n4 && n2<b && b<n5 && n3<c && c<n6){
        printf("Perimetro = %.1f\n", per);
    } else{
        printf("Area = %.1f\n", area);
    }
    
    return 0;
}