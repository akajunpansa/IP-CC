#include <stdio.h>

/**
 * @brief funcao que analisa se a aula tera ou nao de ser cancelada
 * 
 * @param x vetor para acoplar os horarios que os alunos chegaram.
 * @param n quantidade de alunos na sala
 * @param m quantidade de alunos para a aula poder ocorrer
 * @return 1 para o não cancelamento da aula e 0 para cancelamento.
 */
int Cancel(int x[], int n, int m);

int main(){
    int n, m, i, c;
    int x[1000];

    scanf("%d %d", &n, &m);

    for(i=1; i<=n; i++){
        scanf("%d", &x[i]);
    }
    c=Cancel(x, n, m);
    if(c==0){
        printf("SIM\n");
    }
    else{
        printf("NAO\n");
        for(i=n; i>0; i--){
            if(x[i]<=0){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
int Cancel(int x[], int n, int m){
    int i, a=0;
    for(i=1; i<=n; i++){
        if(x[i]<=0){
            a++;
        }
    }
    if(a<m){
        return 0;
    } 
    else{
        return 1;
    }
}

