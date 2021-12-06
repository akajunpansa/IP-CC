#include <stdio.h>

#define MAX 1000

int main() {
    int x[MAX], i, n, c=0, k;

    scanf("%d", &n);
    if(n<1 || n>MAX){
        while(n<1 || n>MAX){
            scanf("%d", &n);
        }
    }
    for(i=1; i<=n; i++){
        scanf("%d", &x[i]);
    }
    scanf("%d", &k);
    for(i=1; i<=n; i++){
        if(x[i]>=k){
            c++;
        }
    }
    printf("%d\n", c);

    return 0;
}