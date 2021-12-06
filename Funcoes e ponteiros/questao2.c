#include <stdio.h>

/**
 * @brief função que retorna o n-ésimo termo da função fibonacci

 * @param t1 primeiro termo
 * @param t2 segundo termo
 * @param n termo desejado
 * @return valor de n
 */
int fibonacci(int t1, int t2, int n);

int main (){
    int f, t1, t2, n;
    scanf("%d %d %d", &t1, &t2, &n);
    f=fibonacci(t1, t2, n);
    printf("%d\n", f);
    return 0;
}

int fibonacci(int t1, int t2, int n){
    int x=3, t3;
    while(x<=n){
        t3=t1+t2;
        t1=t2;
        t2=t3;
        x++;
    }
    return t3;
}