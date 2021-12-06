#include <stdio.h>

#define TX1_10 0.14
#define TX1_9 0.13
#define TX2_20 0.13
#define TX2_19 0.12
#define TX_INSS 0.08
#define TX_INSS_2 0.15

int main() {
    double salario, inss, preco_1, preco_2;
    int mat, venda_1, venda_2;
    double salario_b, salario_l, salario_i, v1, v2;

    scanf("%lf %lf %lf %lf", &salario, &inss, &preco_1, &preco_2);

    while(1){
        scanf("%d %d %d", &mat, &venda_1, &venda_2);
        if(mat==0 && venda_1==0 && venda_2==0)
            break;

        if(venda_1>=10){
            v1=(preco_1*venda_1)*TX1_10;
        } else {
            v1=(preco_1*venda_1)*TX1_9; 
        }
        if(venda_2>=20){
            v2=(preco_2*venda_2)*TX2_20;
        } else{
            v2=(preco_2*venda_2)*TX2_19;
        }
        salario_b=salario+v1+v2;
        salario_i=salario_b-(salario_b*TX_INSS);
        if(salario_i>inss){
            salario_l=salario_i-(salario_i-inss)*TX_INSS_2;
        } else{
            salario_l=salario_i;
        }
        printf("MATRICULA = %d, SALARIO BRUTO = %.2lf, SALARIO LIQUIDO = %.2lf\n", mat, salario_b, salario_l);
    }

    return 0;
}