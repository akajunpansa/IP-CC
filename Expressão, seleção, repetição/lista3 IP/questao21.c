#include <stdio.h>
int main() {
    int T, A, B;
    int x, x1, x2, x3, y1, y2, y3;
    int r1, r2;

    scanf("%i", &T);

    x=1;

    while(x<=T){
        scanf("%d %d", &A, &B);
        x1=A/100;
        x2=(A%100)/10;
        x3=((A%100)%10);

        y1=B/100;
        y2=(B%100)/10;
        y3=((B%100)%10);

        r1=(x3*100)+(x2*10)+x1;
        r2=(y3*100)+(y2*10)+y1;

        if(r1>r2)
        printf("%d\n", r1);
        else
        printf("%d\n", r2);

        x++;

    }
    return 0;
}