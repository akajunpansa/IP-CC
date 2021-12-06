#include <stdio.h>
int main() {
    int a, b, c, d, e, f, g, h;
    int num;
    int n1, n2;
    int x1, x2;

    scanf("%d", &num);

    a=num/10000;
    b=(num%10000)/1000;
    c=((num%10000)%1000)/100;
    d=(((num%10000)%1000)%100)/10;
    e=(((num%10000)%1000)%100)%10;

    f=num/100;
    g=(num%100)/10;
    h=(num%100)%10;

    n1=(a*10000)+(b*1000)+(c*100)+(d*10)+e;
    n2=(e*10000)+(d*1000)+(c*100)+(b*10)+a;
   
    x1=(f*100)+(g*10)+h;
    x2=(h*100)+(g*10)+f;
       
        if(num>=999 && num<=99999 && n1==n2){
            printf("PALINDROMO\n");

        } else if(num>=999 && num<=99999 && n1!=n2) {
            printf("NAO PALINDROMO\n");
        } 
        else if(num<-9999 && num>=-99999 && n1==n2){
            printf("PALINDROMO\n");
        } else if(num<-9999 && num>=-99999 && n1!=n2) {
            printf("NAO PALINDROMO\n");
        }
    else if(num<=999 && num>=-999 && x1==x2){
            printf("PALINDROMO\n");
        } else if(num<=999 && num>=-999 && x1!=x2) {
            printf("NAO PALINDROMO\n");
            } 
            
     else if(num<-99999 || num>99999){
            printf("NUMERO INVALIDO\n");
        }
       
    return 0;

}