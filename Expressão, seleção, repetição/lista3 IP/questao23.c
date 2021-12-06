#include <stdio.h>
int main() {
    unsigned long int cod, r, t;
    float pc, pv;
    int nv;
    float lucro, din, c_total, v_total, c, v, perc, d;
    int l10, l19, l20;
    int x, y;

    l10=0;
    l19=0;
    l20=0;

    y=0;
    x=0;


    while(scanf("%lu %f %f %d", &cod, &pc, &pv, &nv) != EOF){
        lucro=100-((pc*100)/pv); 
        d=(pv-pc)*nv;
        if(lucro<10){
            l10++;
        } else if(lucro>=10 && lucro<20){
            l19++;
        } else if(lucro>=20){
            l20++;
        }

        if(x<d){
            x=d;
            t=cod;
        }
        if(y<nv){
            y=nv;
            r=cod;
        }
    c_total=c+=pc*nv;
    v_total=v+=pv*nv;
    }
    perc=((v_total-c_total)*100)/c_total;
    
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", l10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", l19);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%:  %d\n", l20);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", t);
    printf("Codigo da mercadoria mais vendida:  %lu\n", r);
    printf("Valor total de compras:  %.2f, valor total de vendas:  %.2f e percentual de lucro total:  %.2f%%\n", c_total, v_total, perc);

    return 0;
}