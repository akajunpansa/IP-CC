#include <stdio.h>
int main() {
    int n;
    int p3, p5;

    scanf("%d", &n);

    p3 = n%3;
    p5 = n%5;
    
    if(p3 == 0 && p5== 0){
        
         printf("O NUMERO E DIVISIVEL\n");
    
    

    } else {
        printf("O NUMERO NAO E DIVISIVEL\n");

    }
    return 0;
}