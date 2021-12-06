#include <stdio.h>
#define CA 0.03
#define CB 0.015

int main() {
    int A, B;
    int pop_a, pop_b;
    int x, x1, x2;
    int f1, f2;

    scanf("%d %d", &A, &B);

    x1=A*CA;
    x2=B*CB;
    
    pop_a=A+x1;
    pop_b=B+x2;

    x=1;
    while(pop_a<=pop_b){
        f1=pop_a+=(pop_a*CA);
        f2=pop_b+=(pop_b*CB);
    
        x++;
    }
    printf("ANOS = %d\n", x);
    
    return 0;
}