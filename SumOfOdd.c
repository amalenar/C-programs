#include <stdio.h>

int main(void){
    int limit;
    int sum;

    printf("Enter the limit :");
    scanf("%d", &limit);

    for(int i =1; i<=limit; i++){

        if(i%2!=0){
            sum = sum+i;
            
        }
       }
    
printf("Sum of all odd numbers  = %d", sum);
    return(0);
}