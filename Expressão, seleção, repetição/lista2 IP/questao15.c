#include <stdio.h>
#define C 7
#define R 50
#define resistencia 80000
int main () {
    int CC, DR, RT;

    scanf("%d %d %d", &CC, &DR, &RT);

    if(CC<C && DR>R && RT>resistencia ){
        printf("ACO DE GRAU = 10\n");
    } else if(CC<C && DR>R && RT<=resistencia ){
        printf("ACO DE GRAU = 9\n");
    } else if(CC<C && DR<=R && RT<=resistencia ){
        printf("ACO DE GRAU = 8\n");
    }else {
        printf("ACO DE GRAU = 7\n");
    }
    return 0;
}