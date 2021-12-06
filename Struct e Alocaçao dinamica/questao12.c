#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    int a, b, c, d;
}Racional;
 
void Sum(Racional *r);
void Sub(Racional *r);
void Mult(Racional *r);
void Div(Racional *r);
void Red(int den, int num);
int gcd(int a, int b);
 
int main(){
    Racional r;
    char op;
    
    while(scanf("%d %d %c %d %d", &(r.a), &(r.b), &(op), &(r.c), &(r.d))!=EOF){
        if(op=='+'){
            Sum(&r);
        }
        else if(op=='-'){
            Sub(&r);
        }
        else if(op=='*'){
            Mult(&r);
        }
        else if(op=='/'){
            Div(&r);
        }
    }
    return 0;
}
void Sum(Racional *r){
    int den, num, i=2;
 
    den=(r->b*r->c)+(r->d*r->a);
    num=r->b*r->d;
    Red(den, num);
}
void Sub(Racional *r){
    int den, num, i=2;
 
    den=(r->d*r->a)-(r->b*r->c);
    num=r->b*r->d;
    Red(den, num);
}
void Mult(Racional *r){
    int den, num, i=2;
 
    den=r->a*r->c;
    num=r->b*r->d;
    Red(den, num);
}
void Div(Racional *r){
    int den, num, i=2;
 
    den=r->a*r->d;
    num=r->b*r->c;
    Red(den, num);
}
void Red(int den, int num){
    int i=2;
    int a, b, aux=0, div;
    
    if(den<0){
        a=den*-1;
        aux=1;
    }
    else{
       a=den; 
    }
    b=num;
    div=gcd(a, b);
    a=a/div;
    b=b/div;
    
    if(aux==0) printf("%d %d\n", a, b);
    else printf("-%d %d\n", a, b);
}
int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;

        a = b;
        b = temp;
    }
    if(a<0){
        a*=-1;
    }
    return a;
}