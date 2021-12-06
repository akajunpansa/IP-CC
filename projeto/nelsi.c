#include "nelsi.h"

void pbuild(char *argv[], FILE *arq){
    Poly p; 
    int t, i, maxpot=0, pot=0, j=0, k=0, l=0, m, aux;
    char x[30], num[10];
    double count[100]={0};
    strcpy(p.code, "poly");


    t=strlen(argv[1]);
    strcpy(x, argv[1]);
    for(i=0; i<t; i++){
        if(x[i]=='x'){
            i+=2;
            l=0;
            while(l+i<t){
                if(x[l+i]=='+' || x[l+i]=='-'){
                    break;  
                } 
                l++;                
            }
            pot=0;
            for(m=l; m>0; m--){
                pot+=(x[i+m-l]-'0')*pow(10, m-1);
            }
            
            if(pot>maxpot){
                maxpot=pot;
            }
            num[j]='\0';
            count[pot]+=(double)atof(num);
            if(x[i-j-l-2]=='-') count[x[i]-48]*=-1;
            i+=l+1;
            l=0;
            k++;
            j=0;
        } 
        if(x[i]!='x' && x[i]!='^' && i<t && x[i]!='+' && x[i]!='-'){
            num[j]=x[i];
            j++;
        }
    }
    p.coef=(double*)calloc(maxpot+1,sizeof(double));

    for(i=0; i<=maxpot; i++){
        p.coef[i]=count[i];
    }
    p.p=maxpot;
    arq=fopen(argv[2], "wb");
    fwrite(&p.code, sizeof(p.code), 1, arq);
    fwrite(&p.p, sizeof(int), 1, arq);
    fwrite(p.coef, sizeof(double), ++maxpot, arq);
    fclose(arq);
    free(p.coef);
}
void pview(char *argv[], FILE *arq){
    Poly p;
    int t, i, aux=0, aux2;

    arq=fopen(argv[1], "rb");
    fread(&p.code,sizeof(p.code), 1, arq);
    fread(&p.p, sizeof(int), 1, arq);
    p.coef=(double*)calloc(p.p+1,sizeof(double));
    fread(p.coef, sizeof(double), p.p+1, arq);
    
    if(p.coef[0]!=0){
        printf("%.2lf", p.coef[0]);
        aux++;
    }
    for(i=1; i<=p.p; i++){
        if(p.coef[i]==0) continue;
        else if(p.coef[i]!=1 && p.coef[i]!=-1){
            if(p.coef[i]>0 && aux!=0){
                printf("+");
            }
            printf("%.2lf", p.coef[i]);
        }
        else{
            aux2=p.coef[i];
            switch (aux2)
            {
            case 1:
                if(aux!=0) printf("+");
                break;
            
            default:
                printf("-");
                break;
            }
        }
        aux++;
        printf("x^%d", i);
    }
    printf("\n");
    fclose(arq);
    free(p.coef);
}
void psum(char *argv[], FILE *arq, FILE *arq2){
    Poly pot1;
    Poly pot2;
    Poly new;
    int t, t2, i, j=0, k=0, ctrl=0, aux=0;
    strcpy(new.code, "poly");

    arq=fopen(argv[1], "rb");
    fread(&pot1.code,sizeof(pot1.code), 1, arq);
    fread(&pot1.p, sizeof(int), 1, arq);
    pot1.coef=(double*)calloc(pot1.p+1,sizeof(double));
    fread(pot1.coef, sizeof(double), pot1.p+1, arq);
    arq2=fopen(argv[2], "rb");
    fread(&pot2.code,sizeof(pot2.code), 1, arq2);
    fread(&pot2.p, sizeof(int), 1, arq2);
    pot2.coef=(double*)calloc(pot2.p+1,sizeof(double));
    fread(pot2.coef, sizeof(double), pot2.p+1, arq2);

    if(pot1.p>pot2.p){
        new.coef=(double*)calloc(pot1.p+1,sizeof(double));
        for(i=0; i<=pot1.p; i++){
            new.coef[i]=pot1.coef[i];
        }
        for(i=0; i<=pot2.p; i++){
            new.coef[i]+=pot2.coef[i];
        }
        t=pot1.p;
    }
    else{
        new.coef=(double*)calloc(pot2.p+1,sizeof(double));
        for(i=0; i<=pot2.p; i++){
            new.coef[i]=pot2.coef[i];
        }
        for(i=0; i<=pot1.p; i++){
            new.coef[i]+=pot1.coef[i];
        }
        t=pot2.p;
    }
    new.p=t;
    fclose(arq);
    fclose(arq2);
    free(pot1.coef);
    free(pot2.coef);
    arq=fopen(argv[3], "wb");
    fwrite(&new.code, sizeof(new.code), 1, arq);
    fwrite(&new.p, sizeof(int), 1, arq);
    fwrite(new.coef, sizeof(double), ++t, arq);
    fclose(arq);
    free(new.coef);        
}
void psub(char *argv[], FILE *arq, FILE *arq2){
    Poly pot1;
    Poly pot2;
    Poly new;
    int t, t2, i, j=0, k=0, ctrl=0, aux=0;
    strcpy(new.code, "poly");

    arq=fopen(argv[1], "rb");
    fread(&pot1.code,sizeof(pot1.code), 1, arq);
    fread(&pot1.p, sizeof(int), 1, arq);
    pot1.coef=(double*)calloc(pot1.p+1,sizeof(double));
    fread(pot1.coef, sizeof(double), pot1.p+1, arq);
    arq2=fopen(argv[2], "rb");
    fread(&pot2.code,sizeof(pot2.code), 1, arq2);
    fread(&pot2.p, sizeof(int), 1, arq2);
    pot2.coef=(double*)calloc(pot2.p+1,sizeof(double));
    fread(pot2.coef, sizeof(double), pot2.p+1, arq2);

    if(pot1.p>pot2.p){
        new.coef=(double*)calloc(pot1.p+1,sizeof(double));
        for(i=0; i<=pot1.p; i++){
            new.coef[i]=pot1.coef[i];
        }
        for(i=0; i<=pot2.p; i++){
            new.coef[i]-=pot2.coef[i];
        }
        t=pot1.p;
    }
    else{
        new.coef=(double*)calloc(pot2.p+1,sizeof(double));
        for(i=0; i<=pot2.p; i++){
            new.coef[i]=pot2.coef[i];
        }
        for(i=0; i<=pot1.p; i++){
            new.coef[i]-=pot1.coef[i];
        }
        t=pot2.p;
    }
    new.p=t;
    fclose(arq);
    fclose(arq2);
    free(pot1.coef);
    free(pot2.coef);
    arq=fopen(argv[3], "wb");
    fwrite(&new.code, sizeof(new.code), 1, arq);
    fwrite(&new.p, sizeof(int), 1, arq);
    fwrite(new.coef, sizeof(double), ++t, arq);
    fclose(arq);
    free(new.coef);        
}