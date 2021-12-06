#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "nelsi.h"

int main(int argc, char *argv[]){
    FILE *arq=NULL;
    if(argc!=3){
        printf("\
Usage:\n\
\t <poly_string> <polynomial> <file_name>\n");
        return 0;
    }
    else{
        pbuild(argv, arq);
    }
    return 0;
}