#include <stdio.h>

void Frequency(char x[]);

int main(){
    char x[200];
    int n;

    scanf("%d", &n);
    while(n--){
        scanf("%*c%[^\n]", x); 
        Frequency(x);
    }

    return 0;
}
void Frequency(char x[]){
    int n[26], i, j, k, l, maxfreq=0;

    for(i=0; i!=26; i++){
        n[i]=0;
    }    
    for(i=0; x[i]!='\0'; i++){
        l=0;
        if(x[i]>='A' && x[i]<='Z')
            x[i]=x[i] | 32;
        for(j=0; x[j]!='\0'; j++){
            if(x[i]==x[j]){
                l++;                
            }
        }  
        if(x[i]>='a' && x[i]<='z'){
            if(l>maxfreq){
                maxfreq=l;
            }
            n[x[i]-97]=l;
        }
    }
    for(i=0; i<26; i++){
        if(n[i]==maxfreq){
            printf("%c", i+97);
        }
    }
    printf("\n");
}