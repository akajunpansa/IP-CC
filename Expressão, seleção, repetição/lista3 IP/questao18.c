#include <stdio.h>
int main () {
    double v_ing, v_in, v_fim;
    double lucro, vendas, maior, melhor, qtd, x;

    scanf("%lf %lf %lf", &v_ing, &v_in, &v_fim);

    if(v_in>=v_fim){
        printf("INTERVALO INVALIDO.\n");
        return 0;
    }
    
    maior=0;
    x=v_in;
    while(v_in<=v_fim){
        if (v_in<v_ing){
            vendas=(((v_ing-v_in)/0.5)*25)+120;
        } else if(v_in>v_ing){
            vendas=120-(((v_in-v_ing)/0.5)*30);
        } else {
            vendas=120;
        }
        lucro=v_in*vendas;
        lucro-=(200+vendas*0.05);
        if(lucro>maior){
            maior=lucro;
            melhor=v_in;
            qtd=vendas;
        }
        printf("V: %.2lf, N: %.0lf, L: %.2lf\n", v_in, vendas, lucro);
        v_in++;
    }
        if(maior<0){
            melhor=0;
            maior=0;
            qtd=0;
        }
        printf("Melhor valor final:  %.2lf\n", melhor);
        printf("Lucro:  %.2lf\n", maior);
        printf("Numero de ingressos:  %.0lf\n", qtd);
     return 0;
}