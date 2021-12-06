#include <stdio.h>
int main() {
  
    int tempo_h;
    int tempo_m;
    int tempo_s;
    
    scanf("%d %d %d", &tempo_h, &tempo_m, &tempo_s);
    tempo_s=(tempo_h*3600)+(tempo_m*60)+(tempo_s*1);
       
    printf("O TEMPO EM SEGUNDOS E = %d\n", tempo_s);
    
    return 0;
    }
