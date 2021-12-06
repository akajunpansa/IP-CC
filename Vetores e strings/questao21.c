#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char A[200], B[200];
    int t, i, c;

    scanf("%d", &t);
    while(t--){
        c=0;
        scanf("%s %s", A, B);
        for(i=strlen(A)-1; i>=0; i--){
            while(A[i]!=B[i]){
                A[i]++;
                if(A[i]=='z'+1){
                    A[i]='a';
                }
                c++;
            }
        }
        printf("%d\n", c);
    }

}