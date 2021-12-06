#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * @brief funcao que compara 2 textos
 * 
 * @param x textos a serem comparados
 * @param ind posição do char
 */
void Comparation( char x[], int ind);

int main(){
    char x[1768], y=0;
    int i, g, ind;

    scanf("%[^\n]", x);
    for(i=0; x[i]!='\0'; i++){
        if(x[i]==';'){
            ind=i;
            y++;
        }
    }
    if(y==0 || y>1){
        printf("FORMATO INVALIDO!\n");
    }
    else{
        Comparation(x, ind);
    }
    return 0;
}
void Comparation( char x[], int ind){
    int j, k;
    int a=0, e=0, i=0, o=0, u=0;
    int a1=0, e1=0, i1=0, o1=0, u1=0; 
    float d;

    for(j=0; j<ind; j++){
        if(x[j]=='a' || x[j]=='A'){
            a++; 
        }
        if(x[j]=='e' || x[j]=='E'){
            e++;
        }
        if(x[j]=='i' || x[j]=='I'){
            i++;
        }
        if(x[j]=='o' || x[j]=='O'){
            o++;                
        }
        if(x[j]=='u' || x[j]=='U'){
            u++;               
        }
    }
    for(j=ind+1; x[j]!='\0'; j++){
        if(x[j]=='a' || x[j]=='A'){
            a1++; 
        }
        if(x[j]=='e' || x[j]=='E'){
            e1++;
        }
        if(x[j]=='i' || x[j]=='I'){
            i1++;
        }
        if(x[j]=='o' || x[j]=='O'){
            o1++;                
        }
        if(x[j]=='u' || x[j]=='U'){
            u1++;               
        }
    }
    d=sqrt(pow(a-a1, 2)+pow(e-e1, 2)+pow(i-i1, 2)+pow(o-o1, 2)+pow(u-u1, 2));

    printf("(%d,%d,%d,%d,%d)\n", a, e, i, o, u);
    printf("(%d,%d,%d,%d,%d)\n", a1, e1, i1, o1, u1);
    printf("%.2f\n", d);
}
