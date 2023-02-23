#include <stdio.h>
int main(void){
    int limit,flag,count=0;
    int arr[500],PrimeNumbers[100];
    printf("Enter the limit :");
    scanf("%d",&limit);
    for(int i=0; i<=limit; i++){
        arr[i]=i;
    }
    for(int i=0; i<=limit; i++){
        flag=0;
        for(int j=2; j<arr[i]/2; j++){
            if(arr[i]%j==0){
                flag=1;
                break;
            }
        }

        if(flag==0){
            PrimeNumbers[count]=arr[i];
            count++;
        }
        
    }

     printf("The prime Numbers are : ");
    for(int i=1; i<count; i++){
        printf("%d ",PrimeNumbers[i]);
    }
}