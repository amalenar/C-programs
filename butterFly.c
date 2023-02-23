#include <stdio.h>

int main(void){

   int n=10
   ;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){

            if(i<=n/2){
                if((j<=i||j>n-i)){
                    
                        printf("*");
                    
                }else{
                    printf(" ");
                }
            }
            else{
                if(j<(n-i)+2||j>=i){
                    printf("*");
                }else{
                    printf(" ");
                }
            }

        }printf("\n");
    }
}

