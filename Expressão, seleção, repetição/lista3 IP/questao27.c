#include <stdio.h>
int main () {
    int n;
    int y=0, a=1, c=0; 
    double x, b=0;


    scanf("%d", &n);
    while(n!=0){   
        y=0; 
        c=0;   
        b=0;
        while(y<n){
            scanf("%lf", &x);
            if(b!=0){
                if(x>b){
                    c++;
                }                  
            }
            b=x;
            y++;     
        }
            if(c==n-1)
                printf("ORDENADA\n");
            else 
                printf("DESORDENADA\n");    

    scanf("%d", &n);
    }
 
    return 0;
} 