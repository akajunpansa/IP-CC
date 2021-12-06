    #include <stdio.h>
     
    int main() {
        int i, j, x, y;
        
        scanf("%d %d", &i, &j);
        
        for(x=1; x<=i; x++){
            for(y=1; y<=j; y++){
                if(x>y){
                printf("(%d,%d)", x, y);
                if(x-y>1 && y!=j)
                printf("-");
                }
            }
            printf("\n");
        }
        
        return 0;
    }