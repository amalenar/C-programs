#include <stdio.h>
#include <stdbool.h>




int main(void){

    int size=0;
    int primeCount=0,noPrimeCount=0;

    printf("Enter the size of the array :");
  scanf("%d",&size);
    int arr[size],prime[size],noPrime[size];
    printf("Enter the elements of the aray :");
    for(int i=0;i<size;i++){
       scanf("%d",&arr[i]);
    }
    int flag;
    for(int i=0;i<size;i++){
        flag =0;
        for(int j=2;j<=arr[i];j++){
            if(arr[i]%j==0){
                flag++;
            }
        }
        if(flag<=1){
            // printf("%d ",arr[i]);
            prime[primeCount] = arr[i];
            primeCount++;
        }
        else{
           
            noPrime[noPrimeCount] = arr[i];
             noPrimeCount++;
        }
        
    }
    

    int temp1=0,temp2=0;
    bool condition;
    for(int i =0;i<size;i++){
        condition = ((i==0 || i%2==0)||temp2==noPrimeCount);
        if( condition && temp1!=primeCount){
            arr[i] = prime[temp1];
            temp1++;
        }
        else if(temp2 != noPrimeCount){
            arr[i] = noPrime[temp2];
            temp2++;
        }
    }
   printf("the final aray :");
    for(int i=0;i<size;i++){
       printf("%d ",arr[i]);
    }
   


}