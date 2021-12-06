#include <stdio.h>
int main () {
    int n;
    int par;
    int x, y;

    scanf("%d", &n);
    
    x=1;
    while(x<=n){
        if(x%2==0){
            y=x*x;
            printf("%d^2 = %d\n", x, y);
           
        }
         x++;
    }
    return 0;

}