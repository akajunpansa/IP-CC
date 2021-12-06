#include <stdio.h>
int main(){
    int a, b, c, x;
    int MMC;
    int i, o, p;
        
    scanf("%d %d %d", &a, &b, &c);
    x=2;
    i=a;
    o=b;
    p=c;
    MMC=1;

    while(i!=1 || o!=1 || p!=1){
        if(a%x==0)
            i=a/x;
        if(b%x==0)
            o=b/x;
        if(c%x==0)
            p=c/x;
        if(a%x==0 || b%x==0 || c%x==0){
            printf("%d %d %d :%d\n", a, b, c, x);
            a=i;
            b=o;
            c=p;
            MMC*=x;
        } else 
            x++;
    }
    printf("MMC: %d\n", MMC);
    return 0;
    }
    