#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char paises[24][51]={"brasil\0","alemanha\0","austria\0","coreia\0","espanha\0","grecia\0","estados-unidos\0","inglaterra\0","australia\0","portugal\0","suecia\0","turquia\0","argentina\0","chile\0","mexico\0","antardida\0","canada\0","irlanda\0","belgica\0","italia\0","libia\0","siria\0","marrocos\0","japao\0"};
    char FelizNatal[24][51]={"Feliz Natal!\0","Frohliche Weihnachten!\0","Frohe Weihnacht!\0","Chuk Sung Tan!\0","Feliz Navidad!\0","Kala Christougena!\0","Merry Christmas!\0","Merry Christmas!\0","Merry Christmas!\0","Feliz Natal!\0","God Jul!\0","Mutlu Noeller\0","Feliz Navidad!\0","Feliz Navidad!\0","Feliz Navidad!\0","Merry Christmas!\0","Merry Christmas!\0","Nollaig Shona Dhuit!\0","Zalig Kerstfeest!\0","Buon Natale!\0","Buon Natale!\0","Milad Mubarak!\0"," Milad Mubarak!\0","Merii Kurisumasu!\0"};
    char NomePais[51];
    int i,controle;
    while(scanf("%[^\n]",NomePais)!=EOF)
    {
        controle=0;
        getchar();
        for ( i = 0; i < 24; i++)
        {
            if (strcmp(NomePais,paises[i])==0)
            {
                printf("%s\n",FelizNatal[i]);
                controle++;
            }
        }
        if (controle==0)
        {
            printf("-- NOT FOUND --\n");
        }
    }


    return 0;
}