#include <stdio.h>

int main() {
    int x;
    int y=2, a;

    scanf("%d", &x);
    
    if(x<=1){
    while(x<=1){
        printf("Fatoracao nao e possivel para o numero %d!\n", x);
        scanf("%d", &x);
    }
    }
    a=x;
    printf("%d = ", x);

    while(y<=x){
        if(x%y==0){
            x=x/y;
            printf("%d ", y);
            if(x>1){
                printf("x ");
        }
        }
        else{
            y++;
        }
       
    }
    printf("\n");

    return 0;
}