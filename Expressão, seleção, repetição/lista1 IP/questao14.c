#include <stdio.h>
int main() {
    int num;
    int new;
    int a,b,c;

    scanf("%d", &num);
    
    
    a = (num/100);
    b = (num%100)/10;
    c = (num%100)%10;
   

    new = (a+(b*3)+(c*5))%7;

    printf("O NOVO NUMERO E = %d%d\n", num, new);

    return 0;
}