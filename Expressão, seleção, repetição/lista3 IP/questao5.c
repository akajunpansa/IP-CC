#include <stdio.h>
int main() {
    int n1, n, r, n2;
    int f, x, y, soma;
    

    scanf("%d %d %d", &n1, &r, &n2);

    y=0;
    x=1;
    while(x<=n2){
        f=n1+(x-1)*r;
        soma=y+=f;
        x++;
    } 
    printf("%d\n", soma);

    return 0;
}