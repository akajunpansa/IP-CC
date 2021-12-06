#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
    float u, x, y, z, r;
}Point;
 

int main(){
    Point *p=NULL;
    int t, i;

    scanf("%d", &t);
    p=(Point *)malloc(t*sizeof(Point));
    scanf("%f", &(p[0].u));
    scanf("%f", &(p[0].x));
    scanf("%f", &(p[0].y));
    scanf("%f", &(p[0].z));

    for(i=1; i<t; i++){
        scanf("%f", &(p[i].u));
        scanf("%f", &(p[i].x));
        scanf("%f", &(p[i].y));
        scanf("%f", &(p[i].z));
        p[i-1].r=sqrt(pow(p[i].u-p[i-1].u,2)+pow(p[i].x-p[i-1].x,2)+pow(p[i].y-p[i-1].y,2)+pow(p[i].z-p[i-1].z,2));
    }
    for(i=0; i<t-1; i++){
        printf("%.2f\n", p[i].r);
    }

    free(p);
    return 0;
}