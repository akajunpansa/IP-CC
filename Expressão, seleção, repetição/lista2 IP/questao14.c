#include <stdio.h>

int main () {
    int data;
    int dia, mes, ano;
    
    scanf("%d", &data);
    
    dia=data/1000000;
    mes=(data%1000000)/10000;
    ano=(data%1000000)%10000;

   
    if(dia>31 || mes>12 || dia==0 || mes==0 || data>31120000){
        printf("Data invalida!");
        return 0;
    }       
    if(mes==4 || mes==6 || mes==9 || mes==11)
        if(dia>30){
          printf("Data invalida!");
          return 0;
        }
    if (mes==2){
      if(dia>28){
        printf("Data invalida!");
        return 0;
      }
    }
    printf("%d de ", dia);

           if(mes==1){
              printf("janeiro de %d\n", ano);            
          }
           else if(mes==2){
              printf("fevereiro de %d\n", ano);  
          }
           else if(mes==3){
              printf("marco de %d\n", ano);
          }             
            else if(mes==4){
              printf("abril de %d\n", ano);            
          }       
            else if(mes==5){
              printf("maio de %d\n", ano);
          }  
            else if(mes==6){
              printf("junho de %d\n", ano);
          }            
            else if(mes==7){
              printf("julho de %d\n", ano);
           } 
            else if(mes==8){
              printf("agosto de %d\n", ano);
          }
            else if(mes==9){
              printf("setembro de %d\n", ano);
           }          
            else if(mes==10){
              printf("outubro de %d\n", ano);
              }          
            else if(mes==11){
              printf("novembro de %d\n", ano);
            }
            else if(mes==12){
              printf("dezembro de %d\n", ano);
            } 
              
    
 return 0;
        }