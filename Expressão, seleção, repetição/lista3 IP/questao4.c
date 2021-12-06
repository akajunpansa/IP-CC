#include <stdio.h>
int main() {
    int x, y;
    int par;
    int n;

    scanf("%d %d", &x, &y);

    n=0; 
    
    if(x%2!=0)
        printf("O PRIMEIRO NUMERO NAO E PAR");
    else 
    while(n<y){
        par=x+2*n;
        printf("%d ", par);
        n++;

    }
    printf("\n");
    
    return 0;
}