#include <stdio.h>

#define MAX 100000
/**
 * @brief função que busca os numermos
 * 
 * @param i tamanho do vetor 
 * @param n não sei
 * @param x 
 * @return o resultado caso ache ou não 
 */
int busca(int i, int n, int * x);

int main () {
    
    int x[MAX]; 
    int n, i = 0, t;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if(busca(i, n, x)==1){
            printf("ACHEI\n");
        }
        else {
            printf("NAO ACHEI\n");
        }
    }
    return 0;
    }

int busca(int t, int n, int * x){
    int i;
    for (i = 0; i < t; i++)
  {
    if (x[i] == n)
        return 1;
  }
  return 0;
}   