#include <stdio.h>
int main () {
    int n, seq=0;
    int k;
    int a=0, msec=0, csec=1;

    scanf("%d", &n);

    
    while(n!=0){
        a=seq;
        scanf("%d", &seq);
        if(a!=0){
        if(a!=seq){
            if(csec>msec)
                msec=csec;
            csec=1;
        }
        else 
            csec++;
        }
        n--;
    }
    if(csec>msec)
        msec=csec;
    printf("O comprimento do segmento de numeros iguais e: %d\n", msec);
    return 0;
}