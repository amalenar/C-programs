#include <stdio.h>

int main(void){
    
    int n=9;
    for(int i=1; i<=n; i++){

        for(int j=1; j<=n; j++){

            if(j>n-i){
                printf("*   " );
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}