#include <stdio.h>
int main () {
    int matricula;
    float salario_m, salario_f;
    float imposto;
    float imposto_bruto, imposto_l;
    int dep;
    float resultado;
    float salario_b;
    

    scanf("%d %f %d %f %f", &matricula, &salario_m, &dep, &salario_f, &imposto);

    salario_b=salario_f/salario_m;

    if(salario_b>12){
        imposto_bruto=(salario_f*0.2);
        imposto_l=(imposto_bruto)-(300*dep);
        resultado=((salario_f*(imposto/100))-imposto_l)*(-1);

        printf("MATRICULA = %d\n", matricula);
        printf("IMPOSTO BRUTO = %.2f\n", imposto_bruto);
        printf("IMPOSTO LIQUIDO = %.2f\n", imposto_l);
        printf("RESULTADO = %.2f\n", resultado);
        
    } else if(salario_b>5 && salario_b<12){
        imposto_bruto=(salario_f*0.08);
        imposto_l=(imposto_bruto)-(300*dep);
        resultado=((salario_f*(imposto/100))-imposto_l)*(-1);

        printf("MATRICULA = %d\n", matricula);
        printf("IMPOSTO BRUTO = %.2f\n", imposto_bruto);
        printf("IMPOSTO LIQUIDO = %.2f\n", imposto_l);
        printf("RESULTADO = %.2f\n", resultado);

    }else if(salario_b<=5){
        imposto_bruto=0;
        imposto_l=(imposto_bruto)-(300*dep);
        resultado=((salario_f*(imposto/100))-imposto_l)*(-1);

        printf("MATRICULA = %d\n", matricula);
        printf("IMPOSTO BRUTO = %.2f\n", imposto_bruto);
        printf("IMPOSTO LIQUIDO = %.2f\n", imposto_l);
        printf("RESULTADO = %.2f\n", resultado);
    }
    if(resultado<0){
        printf("IMPOSTO A RECEBER\n");
    }else if(resultado=0){
        printf("IMPOSTO QUITADO\n");
    }else if(resultado>0){
        printf("IMPOSTO A PAGAR\n");
    }
    
    return 0;
}