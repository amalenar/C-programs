#include <stdio.h>
int main(void){

    int arr[50];
    int flag,size,temp=0;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    printf("Enter the elements of array :");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }



    for(int i=0; i<size; i++){
        flag =0;
        for(int j=2; j<=arr[i]/2; j++){
            if(arr[i]%j==0){
                flag=1;
                break;
            }
        }

        if(flag==1){
                        temp=temp+2;
            for(int k=i+1; k<size-temp; k++){

                    arr[k]= arr[k+2];
            }

        }
    }


    printf("The array after skipping two elements after occurrance of non prime is :");
    for(int i=0; i<size-temp; i++ ){
        printf("%d ",arr[i]);
    }
}