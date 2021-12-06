#include <stdio.h>
int main() {
    int num;
    int n1, n2, n3, n4, na, nb, nc;

    scanf("%d", &num);

    n1 = num/1000;
    n2 = (num%1000)/100;
    n3 = (num%1000%100)/10;
    n4 = (num%1000%100%10);

    na = n1*1000;
    nb = n2*100;
    nc = n3*10;

if (num<=0 || num>9999){
    printf("Numero invalido!\n");
}
    else if (num>0 && num<=9999){
        if(num>999 && n1>1 && n2>1 && n3>1 && n4>1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezenas + %d unidades = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
            
        }else if (num>999 && n1==1 && n2>1 && n3>1 && n4>1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezenas + %d unidades = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1>1 && n2==1 && n3>1 && n4>1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezenas + %d unidades = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1>1 && n2>1 && n3==1 && n4>1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena + %d unidades = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1>1 && n2>1 && n3>1 && n4==1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezenas + %d unidade = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1==1 && n2==1 && n3>1 && n4>1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezenas + %d unidades = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1==1 && n2>1 && n3==1 && n4>1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezena + %d unidades = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1==1 && n2>1 && n3>1 && n4==1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezenas + %d unidade = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1>1 && n2==1 && n3==1 && n4>1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezena + %d unidades = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1>1 && n2==1 && n3>1 && n4==1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezenas + %d unidade = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1>1 && n2>1 && n3==1 && n4==1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena + %d unidade = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1==1 && n2==1 && n3==1 && n4>1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezena + %d unidades = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1==1 && n2==1 && n3>1 && n4==1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezenas + %d unidade = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1>1 && n2==1 && n3==1 && n4==1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezena + %d unidade = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1==1 && n2==1 && n3==1 && n4==1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezena + %d unidade = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1>1 && n2==0 && n3>1 && n4>1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d dezenas + %d unidades = %d + %d +  %d\n", num, n1, n3, n4, na, nb, n4);  
        }else if (num>999 && n1>1 && n2>1 && n3==0 && n4>1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d unidades = %d + %d + %d\n", num, n1, n2, n4, na, nb, n4);  
        }else if (num>999 && n1>1 && n2>1 && n3>1 && n4==0){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezenas = %d + %d + %d\n", num, n1, n2, n3, na, nb, nc);
        }else if (num>999 && n1>1 && n2==0 && n3==0 && n4>1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d unidades = %d + %d\n", num, n1, n4, na, n4);
        }else if (num>999 && n1>1 && n2==0 && n3>1 && n4==0){
            printf("(quarta ordem) %d = %d unidades de milhar + %d dezenas = %d + %d\n", num, n1, n3, na, nc);
        }else if (num>999 && n1>1 && n2>1 && n3==0 && n4==0){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centenas = %d + %d\n", num, n1, n2, na, nb);
        }else if (num>999 && n1==1 && n2==0 && n3==0 && n4==0){
            printf("(quarta ordem) %d = %d unidade de milhar = %d\n", num, n1, na);
        }else if (num>999 && n1>1 && n2==0 && n3==0 && n4==0){
            printf("(quarta ordem) %d = %d unidades de milhar = %d\n", num, n1, na);
        }else if (num>999 && n1==1 && n2==0 && n3==0 && n4==1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d unidade = %d + %d\n", num, n1, n4, na, n4);
        }else if (num>999 && n1==1 && n2==0 && n3==1 && n4==0){
            printf("(quarta ordem) %d = %d unidade de milhar + %d dezenas = %d + %d\n", num, n1, n3, na, nc);
        }else if (num>999 && n1==1 && n2==1 && n3==0 && n4==0){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centena = %d + %d\n", num, n1, n2, na, nb);
        }else if (num>999 && n1==1 && n2==1 && n3==1 && n4==0){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezena = %d + %d + %d\n", num, n1, n2, n3, na, nb, nc);
        }else if (num>999 && n1==1 && n2==0 && n3==1 && n4==1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d dezena + %d unidade = %d + %d + %d\n", num, n1, n3, n4, na, nc, n4);
        }else if (num>999 && n1==1 && n2==1 && n3==0 && n4==1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d unidade = %d + %d + %d\n", num, n1, n2, n4, na, nb, n4);
        }else if (num>999 && n1==1 && n2>1 && n3==1 && n4==1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezena + %d unidade = %d + %d + %d + %d\n", num, n1, n2, n3, n4, na, nb, nc, n4);
        }else if (num>999 && n1==1 && n2>1 && n3==1 && n4==0){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezenas = %d + %d + %d\n", num, n1, n2, n3, na, nb, nc);
        }else if (num>999 && n1>1 && n2==1 && n3==0 && n4==0){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centena = %d + %d\n", num, n1, n2, na, nb);
        }else if (num>999 && n1==1 && n2==0 && n3>1 && n4>1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d dezenas + %d unidades = %d + %d + %d\n", num, n1, n3, n4, na, nc, n4);
        }else if (num>999 && n1==1 && n2==0 && n3==0 && n4>1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d unidades = %d + %d\n", num, n1, n4, na, n4);
        }else if (num>999 && n1==1 && n2>1 && n3==0 && n4==0){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centenas = %d + %d\n", num, n1, n2, na, nb);
        }else if (num>999 && n1==1 && n2>1 && n3==0 && n4>1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d unidades = %d + %d + %d\n", num, n1, n2, n4, na, nb, n4);
        }else if (num>999 && n1==1 && n2>1 && n3>1 && n4==0){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezenas = %d + %d + %d\n", num, n1, n2, n3, na, nb, nc);
        }else if (num>999 && n1==1 && n2==1 && n3==0 && n4>1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d unidades = %d + %d + %d\n", num, n1, n2, n4, na, nb, n4);
        }else if (num>999 && n1==1 && n2==0 && n3==1 && n4>1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d dezena + %d unidades = %d + %d + %d\n", num, n1, n3, n4, na, nc, n4);
        }else if (num>999 && n1>1 && n2>1 && n3==1 && n4==0){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezena = %d + %d + %d\n", num, n1, n2, n3, na, nb, nc);
        }else if (num>999 && n1>1 && n2>1 && n3==0 && n4==1){
            printf("(quarta ordem) %d = %d unidadew de milhar + %d centenas + %d unidade = %d + %d + %d\n", num, n1, n2, n4, na, nb, n4);
        }else if (num>999 && n1>1 && n2==1 && n3==0 && n4>1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d unidades = %d + %d + %d\n", num, n1, n2, n4, na, nb, n4);
        }else if (num>999 && n1>1 && n2==0 && n3==1 && n4>1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d dezena + %d unidades = %d + %d + %d\n", num, n1, n3, n4, na, nc, n4);
        }else if (num>999 && n1>1 && n2==0 && n3==1 && n4==1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d dezena + %d unidade = %d + %d + %d\n", num, n1, n3, n4, na, nc, n4);
        }else if (num>999 && n1>1 && n2==1 && n3==0 && n4==1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d unidade = %d + %d + %d\n", num, n1, n2, n4, na, nb, n4);
        }else if (num>999 && n1>1 && n2==0 && n3==1 && n4==0){
            printf("(quarta ordem) %d = %d unidades de milhar + %d dezena = %d + %d\n", num, n1, n3, na, nc);
        }else if (num>999 && n1==1 && n2==0 && n3>1 && n4==0){
            printf("(quarta ordem) %d = %d unidade de milhar + %d dezenas = %d + %d\n", num, n1, n3, na, nc);
        }else if (num>999 && n1==1 && n2==1 && n3>1 && n4==0){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezenas = %d + %d + %d\n", num, n1, n2, n3, na, nb, nc);
        }else if (num>999 && n1==1 && n2==0 && n3>1 && n4==1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d dezenas + %d unidade = %d + %d + %d\n", num, n1, n3, n4, na, nc, n4);
        }else if (num>999 && n1>1 && n2==1 && n3==0 && n4==0){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centena = %d + %d\n", num, n1, n2, na, nb);
        }else if (num>999 && n1>1 && n2==1 && n3==1 && n4==0){
            printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezena = %d + %d + %d\n", num, n1, n2, n3, na, nb, nc);
        }else if (num>999 && n1>1 && n2==0 && n3==0 && n4==1){
            printf("(quarta ordem) %d = %d unidades de milhar + %d unidade = %d + %d\n", num, n1, n4, na, n4);
        }else if (num>999 && n1==1 && n2>1 && n3==0 && n4==1){
            printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d unidade = %d + %d + %d\n", num, n1, n2, n4, na, nb, n4);
        }

        
        }if (num>0 && num<=999){
            if(num>99 && n1==0 && n2>1 && n3>1 && n4>1){
                printf("(terceira ordem) %d = %d centenas + %d dezenas + %d unidades = %d + %d + %d\n", num, n2, n3, n4, nb, nc, n4);
            } else if (num>99 && n1==0 && n2==1 && n3>1 && n4>1){
                printf("(terceira ordem) %d = %d centena + %d dezenas + %d unidades = %d + %d + %d\n", num, n2, n3, n4, nb, nc, n4);
            } else if(num>99 && n1==0 && n2>1 && n3==1 && n4>1){
                printf("(terceira ordem) %d = %d centenas + %d dezena + %d unidades = %d + %d + %d\n", num, n2, n3, n4, nb, nc, n4);
            } else if(num>99 && n1==0 && n2>1 && n3>1 && n4==1){
                printf("(terceira ordem) %d = %d centenas + %d dezenas + %d unidade = %d + %d + %d\n", num, n2, n3, n4, nb, nc, n4);
            } else if(num>99 && n1==0 && n2==1 && n3==1 && n4>1){
                printf("(terceira ordem) %d = %d centena + %d dezena + %d unidades = %d + %d + %d\n", num, n2, n3, n4, nb, nc, n4);
            } else if(num>99 && n1==0 && n2==1 && n3>1 && n4==1){
                printf("(terceira ordem) %d = %d centena + %d dezenas + %d unidade = %d + %d + %d\n", num, n2, n3, n4, nb, nc, n4);
            } else if(num>99 && n1==0 && n2>1 && n3==1 && n4==1){
                printf("(terceira ordem) %d = %d centenas + %d dezena + %d unidade = %d + %d + %d\n", num, n2, n3, n4, nb, nc, n4);
            } else if(num>99 && n1==0 && n2==1 && n3==1 && n4==1){
                printf("(terceira ordem) %d = %d centena + %d dezena + %d unidade = %d + %d + %d\n", num, n2, n3, n4, nb, nc, n4);
            } else if(num>99 && n1==0 && n2>1 && n3==0 && n4>1){
                printf("(terceira ordem) %d = %d centenas + %d unidades = %d +  %d\n", num, n2, n4, nb, n4);
            } else if(num>99 && n1==0 && n2>1 && n3>1 && n4==0){
                printf("(terceira ordem) %d = %d centenas + %d dezenas = %d + %d\n", num, n2, n3, nb, nc);
            } else if(num>99 && n1==0 && n2>1 && n3==0 && n4==0){
                printf("(terceira ordem) %d = %d centenas = %d\n", num, n2, nb);
            } else if(num>99 && n1==0 && n2==1 && n3==0 && n4>1){
                printf("(terceira ordem) %d = %d centena + %d unidades = %d + %d\n", num, n2, n4, nb, n4);
            } else if(num>99 && n1==0 && n2==1 && n3>1 && n4==0){
                printf("(terceira ordem) %d = %d centena + %d dezenas = %d + %d\n", num, n2, n3, nb, nc);
            } else if(num>99 && n1==0 && n2==1 && n3==0 && n4==0){
                printf("(terceira ordem) %d = %d centena = %d\n", num, n2, nb);
            } else if(num>99 && n1==0 && n2>1 && n3==1 && n4==0){
                printf("(terceira ordem) %d = %d centenas + %d dezena = %d + %d\n", num, n2, n3, nb, nc);
            } else if(num>99 && n1==0 && n2>1 && n3==0 && n4==1){
                printf("(terceira ordem) %d = %d centenas + %d unidade = %d + %d\n", num, n2, n4, nb, n4);
            } else if(num>99 && n1==0 && n2==1 && n3==0 && n4==1){
                printf("(terceira ordem) %d = %d centena + %d unidades = %d + %d\n", num, n2, n4, nb, n4);
            } else if(num>99 && n1==0 && n2==1 && n3==1 && n4==0){
                printf("(terceira ordem) %d = %d centena + %d dezena = %d + %d\n", num, n2, n3, nb, nc);
            }
           
           
            } if(num>0 && num<=99){
                 }if(num>9 && n1==0 && n2==0 && n3>1 && n4>1){
                    printf("(segunda ordem) %d = %d dezenas + %d unidades = %d + %d\n", num, n3, n4, nc, n4);
            }else if(num>9 && n1==0 && n2==0 && n3==1 && n4>1){
                    printf("(segunda ordem) %d = %d dezena + %d unidades = %d + %d\n", num, n3, n4, nc, n4);
            } else if(num>9 && n1==0 && n2==0 && n3>1 && n4==1){
                    printf("(segunda ordem) %d = %d dezenas + %d unidade = %d + %d\n", num, n3, n4, nc, n4);
            } else if(num>9 && n1==0 && n2==0 && n3==1 && n4==1){
                    printf("(segunda ordem) %d = %d dezena + %d unidade = %d + %d\n", num, n3, n4, nc, n4);
            } else if(num>9 && n1==0 && n2==0 && n3>1 && n4==0){
                    printf("(segunda ordem) %d = %d dezenas = %d\n", num, n3, nc);
            } else if(num>9 && n1==0 && n2==0 && n3==1 && n4==0){
                    printf("(segunda ordem) %d = %d dezena = %d\n", num, n3, nc);
            
            } if (num>0 && num<=9){
            } if(num<=9 && n1==0 && n2==0 && n3==0 && n4>1){
                printf("(primeira ordem) %d = %d unidades = %d\n", num, n4, n4);
            } else if(num<=9 && n1==0 && n2==0 && n3==0 && n4==1){
                printf("(primeira ordem) %d = %d unidade = %d\n", num, n4, n4);
            } else
                   
    

    return 0;
}