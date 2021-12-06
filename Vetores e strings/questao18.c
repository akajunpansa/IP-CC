#include <stdio.h>
#include <string.h>

/**
 * @brief funcao que imprime o numero em ordem crescente
 * 
 * @param a o numero inicial
 * @param b o numero final
 */
void Mirror(int a, int b);

/**
 * @brief funcao que imprime o reflexo do numero
 * 
 * @param a o numero inicial    
 * @param b o numero final
 */
void Reflex(int a, int b);

int main(){
    int i, a, b, n, x[1000000];

    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &a, &b);
        Mirror(a, b);
        Reflex(a, b);
        printf("\n");
    }
    return 0;

}
void Mirror(int a, int b){
    
    for(a; a<=b; a++){      
        printf("%d", a);
    }
}
void Reflex(int a, int b){
    int indice=0, x;
    char n[100000];

    for(x=a; x<=b; x++){
        if(x<10){
            n[indice]=x%10+'0';
            indice++;
        }
        else if(x<100){
            n[indice]=x/10+'0';
            n[indice+1]=x%10+'0';
            indice+=2;
        }
        else if(x<1000){
            n[indice]=x/100+'0';
            n[indice+1]=(x%100)/10+'0';
            n[indice+2]=x%10+'0';
            indice+=3;
        }
        else if(x<10000){
            n[indice]=x/1000+'0';
            n[indice+1]=(x%1000)/100+'0';
            n[indice+2]=(x%100)/10+'0';
            n[indice+3]=x%10+'0';
            indice+=4;
        }
        else if(x<100000){
            n[indice]=x/10000+'0';
            n[indice+1]=(x%10000)/1000+'0';
            n[indice+2]=(x%1000)/100+'0';
            n[indice+3]=(x%100)/10+'0';
            n[indice+4]=x%10+'0';
            indice+=5;
        }
    }
    indice--;
    while (indice>=0){
        printf("%c", n[indice]);
        indice--;
    }
    
}