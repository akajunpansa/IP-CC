#include <stdio.h>
int main () {
    int n1, n2, n3;
    int nf;
    int nq;

    scanf("%d %d %d", &n1, &n2, &n3);

    nf = (n1*100)+(n2*10)+n3;
    nq = nf*nf;

    if (n1>=10 || n2>=10 || n3>=10){
        printf("DIGITO INVALIDO\n");
    } else {
        printf("%d, %d\n", nf, nq);
}

    return 0;
}