#include <stdio.h>

int main(void){

    int n;

    int arr[50];
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("Enter the elements of the array :");
    for(int i=0; i<=n-1; i++){
      

        scanf("%d",&arr[i]);

    }
    for( int i=0; i<=n-1; i++){
        int  flag=0;
        for(int j=2; j<n-2; j++){

            if(arr[i]%j!=0){
                 flag++;
            }
           
        }
        if(flag==n-4){
            arr[i]=42;
        }
    }


    for(int i=0; i<=n-1; i++){
        if(arr[i]==42){
            printf("*");

        }else{
            printf("%d ",arr[i]);
        }
    }

}