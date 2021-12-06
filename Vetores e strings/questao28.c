#include <stdio.h>
#include <string.h>

void Dance(char x[]);

int main(){
    char x[500], c;
    int i;

    while(scanf("%[^\n]%*c", x)!=EOF){
        Dance(x);
        printf("\n");
    }
    return 0;
}
void Dance(char x[]){
    int i, c, j=0;

    for(i=0; x[i]!='\0'; i++){
        if(x[i]!= ' '){
        x[i]= x[i] | 32;
        }
    }    
    for(i=0; x[i]!='\0'; i++){
        if(j%2==0 && x[i]!=' '){
            x[i]=x[i]-32;
        }
        if(x[i]!=' ')
        j++;
    }
    printf("%s", x);
}

