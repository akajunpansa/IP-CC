#include <stdio.h>

int main() {
    int n;
    int x, cn, y;

    scanf("%d", &n);

    cn=0;
    x=1;
    if(n<0){
        printf("Numero invalido!\n");
        return 0;
    } else{

    while(x<=n){
        if(n%x==0){
        cn++;
        }
        x++;

    
    }
    if(cn==2){
        printf("PRIMO\n");
    } else {
        printf("NAO PRIMO\n");
    }
    }
    return 0;
}