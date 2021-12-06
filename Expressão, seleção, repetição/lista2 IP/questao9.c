#include <stdio.h>
int main() {
    int ano;
    int bi;
    int b1;
    int b2;


    scanf("%d", &ano);

    bi = ano%4;
    b1 = ano%100;
    b2 = ano%400;

    if (bi==0 && b1!=0 && ano>1582){
        printf("ANO BISSEXTO\n"); 
    }       else if (bi==0 && b1==0 && b2==0 && ano>1582){
        printf("ANO BISSEXTO\n");
    } 
                 else {
        printf("ANO NAO BISSEXTO\n");
    }

    
    return 0;
}