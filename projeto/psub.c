#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "nelsi.h"

int main(int argc, char *argv[]){
    FILE *arq=NULL;
    FILE *arq2=NULL;
    if(argc!=4){
        printf("\
Usage:\n\
\t <poly_string> <file_name1> <file_name2> <file_name_out>\n");
        return 0;
    }
    else{
        psub(argv, arq, arq2);
    }
    return 0;
}
