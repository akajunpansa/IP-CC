#include <stdio.h>
#define PP 0.7
#define PL 0.15
#define PT 0.15
#define FT 128

int main() {
    int mat, freq;
    double p1, p2, p3, p4, p5, p6, p7, p8;
    double l1, l2, l3, l4, l5;
    double trab;
    double pf, lf;
    double nota;
    int freq_a;

    while(mat!=-1 && p1!=-1 && p2!=-1 && p3!=-1 && p4!=-1 && p5!=-1 && p6!=-1 && p7!=-1 && p8!=-1 && l1!=-1 && l2!=-1 && l3!=-1 && l4!=-1 && l5!=-1 && trab!=-1){

    scanf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d", &mat, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &trab, &freq);

    pf=(p1+p2+p3+p4+p5+p6+p7+p8)/8;
    lf=(l1+l2+l3+l4+l5)/5;
    freq_a=FT*0.75;

    nota=pf*PP+lf*PL+trab*PT;
    
    if(mat==-1 && p1==-1 && p2==-1 && p3==-1 && p4==-1 && p5==-1 && p6==-1 && p7==-1 && p8==-1 && l1==-1 && l2==-1 && l3==-1 && l4==-1 && l5==-1 && trab==-1){

        break;
    } else if(nota>=6 && freq>=freq_a){
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", mat, nota);
    } else if(nota<6 && freq>=freq_a){
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", mat, nota);
    } else if(nota>=6 && freq<freq_a){
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", mat, nota);
    } else if(nota<6 && freq<freq_a){
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", mat, nota);
    } 
    }



    return 0;
}