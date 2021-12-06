#include <stdio.h>
int main() {

    float num;
    float n;
    float n3;
    float n2;
    float A;
  
    scanf("%f", &num);
  
    
    n = ((int)((num*10)+0.5)/10.0);
    printf("%f\n", n);
    
    n2 = ((int)((num*100)+0.5)/100.0);
    printf("%f\n", n2);

    n3 = ((int)((num*1000)+0.5)/1000.0);
    printf("%f\n", n3);
    
    
    return 0;
    }
