#include <stdio.h>
int main() {
    int n;
    int x, a, y;

    scanf("%d", &n);
    x=1;
    y=1;


    while(x<=n){
       
        printf("%d*%d*%d = ", x, x, x);
        a=x-1;
        while(a+1>0){
            if(y%2){
                printf("%d", y);
                if(a-->0)
                    printf("+");
            }
            y++;
        }
        
        printf("\n");
        x++;

    }
    return 0;

}