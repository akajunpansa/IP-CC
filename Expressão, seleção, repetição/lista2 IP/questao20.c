#include <stdio.h>
int main (){
    float renda, salario, rf;
    int fam, EM, etnia;
    

    scanf("%f %d %d %d", &renda, &fam, &EM, &etnia);
    
    salario=937.00;
    rf=renda/fam;

    if(EM==2 && rf<=salario*1.5 && etnia==4){
        printf("ALUNO COTISTA (L1)\n");
    } else if(EM==2 && rf<=salario*1.5 && etnia<=3){
        printf("ALUNO COTISTA (L2)\n"); 
    } else if(EM==2 && etnia==4){
        printf("ALUNO COTISTA (L3)\n");
    } else if(EM==2 && etnia<=3){
        printf("ALUNO COTISTA (L4)\n");
    
    } else {
        printf("ALUNO NAO COTISTA\n");
    }
    
    return 0;

}