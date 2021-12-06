#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define ID_SIZE 4
typedef struct {
	char code[ID_SIZE];
	int p;
	double *coef;
} Poly;

/**
 * funcao que converte o a string em um polinomio em double
 * ordena os fatores em ordem crescente
 * e cria um arquivo binario para armazenar esse polinomio,
 * sua maior potencia, e o seu code;
 * 
 * @param argv argumentos lidos, onde está contido o nome do arquivo a ser criado
 * e o polinomio a ser armazenado
 * @param arq o arquivo na qual será armazenado o polinomio
 */
void pbuild(char *argv[], FILE *arq);
/**
 * funcao que recebe um arquivo binario contendo um polinomio e impreme-o
 * no formato (sinal)ix^e, não imprimindo valores de i=1 e desconsiderando
 * polinomios a qual o i e o e valem 0; 
 * 
 * @param argv comandos passados via terminal um arquivo para ser impresso
 * @param arq ponteiro para arquivos
 */
void pview(char *argv[], FILE *arq);
/**
 * funcao que recebe 2 arquivos binarios contendo 2 polinomio e 
 * soma o valor do primeiro com o segundo, gerando um arquivo com o
 * nome do 3° parametro, criando um terceiro arquivo e mantendo os
 * anteriores.
 * 
 * @param argv ponteiro que recebe as instruções via termina 
 * @param arq ponteiro para arquivos 1
 * @param arq2 ponteiro para arquivos 2
 */
void psum(char *argv[], FILE *arq, FILE *arq2);
/**
 * funcao que recebe 2 arquivos binarios contendo 2 polinomio e 
 * subtrai o valor do primeiro com o segundo, gerando um arquivo com o
 * nome do 3° parametro, criando um terceiro arquivo e mantendo os
 * anteriores.
 * 
 * @param argv ponteiro que recebe as instruções via termina 
 * @param arq ponteiro para arquivos 1
 * @param arq2 ponteiro para arquivos 2
 */
void psub(char *argv[], FILE *arq, FILE *arq2);