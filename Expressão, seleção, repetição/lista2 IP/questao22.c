#include <stdio.h>
int main () {
    int i;
    float a, b, c;
    
    scanf("%d %f %f %f", &i, &a, &b, &c);
    
    if(i==1 && a>b && b>c){
        printf("%.2f %.2f %.2f\n", c, b, a);
    } else if(i==1 && a>c && c>b){
        printf("%.2f %.2f %.2f\n", b, c, a); 
    } else if(i==1 && b>a && a>c){
        printf("%.2f %.2f %.2f\n", c, a, b);
    } else if(i==1 && b>c && c>a){
        printf("%.2f %.2f %.2f\n", a, c, b);
    } else if(i==1 && c>a && a>b){
        printf("%.2f %.2f %.2f\n", b, a, c);
    } else if(i==1 && c>b && b>a){
        printf("%.2f %.2f %.2f\n", a, b, c);
    } else if(i==1 && a==b && b>c){
        printf("%.2f %.2f %.2f\n", c, b, a);
    } else if(i==1 && a>b && b==c){
        printf("%.2f %.2f %.2f\n", c, b, a);
    } else if(i==1 && c>a && a==b){
        printf("%.2f %.2f %.2f\n", a, b, c);
    } else if(i==1 && c==a && a==b){
        printf("%.2f %.2f %.2f\n", a, b, c);
        
    } else if(i==2 && a>b && b>c){
        printf("%.2f %.2f %.2f\n", a, b, c);
    } else if(i==2 && a>c && c>b){
        printf("%.2f %.2f %.2f\n", a, c, b);
    } else if(i==2 && b>a && a>c){
        printf("%.2f %.2f %.2f\n", b, a, c);
    } else if(i==2 && b>c && c>a){
        printf("%.2f %.2f %.2f\n", b, c, a);
    } else if(i==2 && c>a && a>b){
        printf("%.2f %.2f %.2f\n", c, a, b);
    } else if(i==2 && c>b && b>a){
        printf("%.2f %.2f %.2f\n", c, b, a);
    } else if(i==2 && a==b && b>c){
        printf("%.2f %.2f %.2f\n", a, b, c);
    } else if(i==2 && a>b && b==c){
        printf("%.2f %.2f %.2f\n", a, b, c);
    } else if(i==2 && c>a && a==b){
        printf("%.2f %.2f %.2f\n", c, a, b);
    } else if(i==2 && a==c && c==b){
        printf("%.2f %.2f %.2f\n", a, b, c);
    }
    
    
    else if(i==3 && a>b && b>c){
        printf("%.2f %.2f %.2f\n", b, a, c);
    } else if(i==3 && a>c && c>b){
        printf("%.2f %.2f %.2f\n", c, a, b);
    } else if(i==3 && b>a && a>c){
        printf("%.2f %.2f %.2f\n", a, b, c);
    } else if(i==3 && b>c && c>a){
        printf("%.2f %.2f %.2f\n", c, b, a);
    } else if(i==3 && c>a && a>b){
        printf("%.2f %.2f %.2f\n", a, c, b);
    } else if(i==3 && c>b && b>a){
        printf("%.2f %.2f %.2f\n", b, c, a);
    } else if(i==3 && a==b && b>c){
        printf("%.2f %.2f %.2f\n", a, b, c);
    } else if(i==3 && a>b && b==c){
        printf("%.2f %.2f %.2f\n", b, a, c);
    } else if(i==3 && c>a && a==b){
        printf("%.2f %.2f %.2f\n", a, c, b);
    } else if(i==3 && c==a && a==b){
        printf("%.2f %.2f %.2f\n", a, b, c);
    } 
    else if(i!=1 && i!=2 && i!=3){
        return 0;
    }
    return 0;
}