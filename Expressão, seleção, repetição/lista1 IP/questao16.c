#include <stdio.h>
int main() {
    int n;
    int a;
    int b;
    int c;

    scanf("%d", &n);
    
    a = n/100;
    b = (n%100)/10;
    c = (n%100)%10;

    printf("%d%d%d\n", c, b, a);

    
    return 0;
}