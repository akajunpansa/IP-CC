#include <stdio.h>
int main () {
    int a, b, c, d;
    int soma;

   scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a>b && a>c && a>d){
        soma = b+c+d;
        printf("%d\n", soma);
    } else if(b>a && b>c && b>d){
        soma=a+c+d;
        printf("%d\n", soma);
    } else if(c>a && c>b && c>d){
        soma=a+b+d;
        printf("%d\n", soma);
    }else if(d>a && d>b && d>c){
        soma=a+b+c;
        printf("%d\n", soma);      
    }
    return 0;
}