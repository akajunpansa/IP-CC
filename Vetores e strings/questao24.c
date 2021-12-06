#include <stdio.h>

int main(){
    int x[100], n, i, c=0;

    scanf("%d", &n);
    for(i=0; i<n; i++){
    scanf("%d", &x[i]);
    }
    for(i=0; i<n; i++){
        if(x[i]!=x[i+1]){
            printf("%d\n", x[i]);
            c++;
        }
    }
    return 0;
}
