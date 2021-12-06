#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double num;
    double denom;
    double resul;
}fracao;

int main(){
    double cont=0;
    int i,j,k,t,n, count;
    char a;
    fracao f[40];

    scanf("%d", &t);

    k=0;
    while(t--){
        count = 0;
        i=0;
        n=0;
        // f=(fracao*)malloc(1*sizeof(fracao));
        a=' ';
        while(1){
            scanf("%lf/%lf", &f[i].num, &f[i].denom);
            f[i].resul = f[i].num/f[i].denom;
            a = getchar();
            i++;
            n++;
            if(a!=' ') break;
            // if(n>1) f=(fracao*)realloc(f, n*sizeof(fracao));
        }
        printf("Caso de teste %d\n", k+1);
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(f[i].resul == f[j].resul){
                    printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", f[i].num, f[i].denom, f[j].num, f[j].denom);
                    count++;
                }
            }
        }
        if(count == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
        k++;
        // free(f);
    }
    return 0;
}