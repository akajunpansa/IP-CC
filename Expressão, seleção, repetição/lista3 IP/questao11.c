#include <stdio.h>
int main () {
    int n, seq;
    int k, i;
    int a, msec, csec;

    scanf("%d", &n);

    seq=0;
    i=0;
    a=0;
    msec=1;
    csec=1;
    
    for (i = 0; i < n; i++){    
        a=seq;
        scanf("%d", &seq);
        if(i!=0){
         if(a>=seq){
            if(csec>msec)
                msec=csec;
            csec=1;
        }
        else 
            csec++;
        }
    }
    if(csec>msec)
        msec=csec;
    printf("O comprimento do segmento crescente maximo e: %d\n", msec);
    return 0;
}