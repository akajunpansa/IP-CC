#include <stdio.h>
int main () {
    float a, b ,c;

    scanf("%f %f %f", &a, &b, &c);

    if (a>b && b>c){
        printf("%.2f\n, %.2f, %.2f\n", c, b, a);
    } else if (b>a && a>c){
        printf("%.2f, %.2f, %.2f\n", c, a, b);
    } else if (a>b && c>b && a>c){
        printf("%.2f, %.2f, %.2f\n", b, c, a);
    } else if(b>c && c>a){
        printf("%.2f, %.2f, %.2f\n", a, c, b);
    } else if(c>a && a>b){
        printf("%.2f, %.2f, %.2f\n", b, a, c);
    } else if(c>b && b>a){
        printf("%.2f, %.2f, %.2f\n", a, b, c);
    } else if (c>a && a>b){
         printf("%.2f, %.2f, %.2f\n", a, b, c);
    }
    
     else if(b>c && a==b){
        printf("%.2f, %.2f, %.2f\n", c, b, a);
    } else if (b>a && a==c){
        printf("%.2f, %.2f, %.2f\n", c, a, b);
    } else if (b==c && c>a){
         printf("%.2f, %.2f, %.2f\n", a, c, b);
    } else if(a>b && b==c){
         printf("%.2f, %.2f, %.2f\n", b, c, a);
    } else if(c>a && a==b){
         printf("%.2f, %.2f, %.2f\n", a, b, c);
    }else if(c==b && b>a){
         printf("%.2f, %.2f, %.2f\n", a, b, c);
    } else if(a==b && b==c){
         printf("%.2f, %.2f, %.2f\n", c, b, a);
    }
    

    return 0;
}