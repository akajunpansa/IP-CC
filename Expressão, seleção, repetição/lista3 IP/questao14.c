#include <stdio.h>
int main() {
    int times;
    int x, y, z;

    scanf("%d", &times);

    if(times<2){
        printf("Campeonato invalido!\n");
        return 0;
    }
    z=1;

    for(x=1; x<times; x++){
    for(y=2; y<times+1; y++){
      if(x != y && x < y){
        printf("Final %d: Time%d X Time%d\n", z, x, y);
        z++;
        
    }
    }
    }

    return 0;

}