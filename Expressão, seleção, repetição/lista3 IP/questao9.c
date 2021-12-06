#include <stdio.h>
int main () {
    int n;
    int fat;
    int x, y;
    int soma;

    scanf("%d", &n);
   
    x=n; 
    if(n==0)
    x=1;
    fat=x;

    while(x>=1){
        if(x>1){
        soma=fat*=(x-1);
        
         x--;
        } else if(x==1){
        soma=fat*=1;
        break;
        }
    }
    printf("%d! = %d\n", n, soma);
    
    return 0;
}