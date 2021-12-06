#include <stdio.h>
#include<math.h>

int main(){
    double x;
    int y, cx=0, i=2, d;

    scanf("%lf", &x);
    
    y=x;
    while(x-y!=0){
        
        x=x*10;
        y=x;
        cx++;
    }

    d=pow(10, cx);
    
    for(i=2; i<=d; i++){
        if(y%i==0 && d%i==0){
            y=y/i;
            d=d/i;
        }
    }
    printf("%d/%d\n", y, d);

    return 0;

}