#include <stdio.h>
int main() {

    int num;
    int resto;
    int bin;
    int b7, b6, b5, b4, b3, b2, b1, b0;
    
    scanf("%d", &num);
   
    if(num>=0 && num<=255) {
      
    b0 = num%2;
    b1 = (num/2)%2;
    b2 = (num/2/2)%2;
    b3 = (num/2/2/2)%2;
    b4 = (num/2/2/2/2)%2;
    b5 = (num/2/2/2/2/2)%2;
    b6 = (num/2/2/2/2/2/2)%2;
    b7 = (num/2/2/2/2/2/2/2)%2;  
         printf("%d%d%d%d%d%d%d%d\n", b7, b6, b5, b4, b3, b2, b1, b0);
    } else {
         printf("Numero invalido!\n");
    } 
    
    return 0;
    }  
