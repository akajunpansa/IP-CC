#include <stdio.h> 

/**
 * @brief funcao que compara quantos semelhantes a one, two e three tem
 * 
 * @param x os caracteres scaneados
 */
void Similar(char x[]);

int main() {
    int n;
    char x[1000];

    scanf("%d", &n);
    while(n--){
        scanf("%*c%[^\n]", x);
        Similar(x);
        printf("\n");
    }
    return 0;
}
void Similar(char x[]){
    int a=0, b=0, c=0;
   
        if(x[0]=='o'){
            a++;
        }
        if(x[1]=='n'){
            a++;
        } 
        if(x[2]=='e'){
            a++;
        }
        

        if(x[0]=='t'){
            b++;
        }
        if(x[1]=='w'){
            b++;
        }
        if(x[2]=='o'){
            b++;
        }
        

        if(x[0]=='t'){
            c++;
        }
        if(x[1]=='h'){
            c++;
        }
        if(x[2]=='r'){
            c++;
        }
        if(x[3]=='e'){
            c++;
        }
        if(x[4]=='e'){
            c++;
        }
        
        if(a>b && a>c){
            printf("1\n");
        }
        else if(b>=c && b>a){
            printf("2\n");
        }
        else if(c>a && c>b){
            printf("3\n");
        }
    }
    