#include <stdio.h>

/**
 * @brief funcao que calcula o valor de pi
 * 
 * @param n 
 * @return double 
 */
double pi(int n);

int main(){
    
    int n;
    double p;

    scanf("%d", &n);

    p=pi(n);
    printf("%.12lf\n", p);

    return 0;
}

double pi(int n){
    int i; 
    double v_pi=1, a=2, b=1.0;

    for(i=0; i<n; i++){
        v_pi*=(a/b);

        if(i%2==0){
            b=b+2;
        }
        else if(i%2==1 && i>0 ){
            a=a+2;
        }  
        
    }
    return v_pi*2;
}