#include <stdio.h>
int main () {
    int n, b, p;
    int y, x, z;

    scanf("%d", &n);

   
    b=1;
    x=0;
    y=0;
   // for(b=1; b<=64; n++){
     //   if(b==1 || b%2!=0){
      //  x=n+=(n*1);
       // } else if(b%2==0){
       // y=n+=(n*2);
     //   }
    //}
    while(b<=64){
        if(b==1 || b%2==0){
            x++;
        } else if(b%2!=0){
            y++;
        }
        b++;
        }
    
    z=(x*n)+(y*(n*2));

    printf("%d\n", z);
    return 0;
}