#include <stdio.h>

int main(void){
    int arr[50];
    int size,count,temp;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    printf("Enter the elements of the array :");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size; i++){
        count=0,temp=0;
        for(int j=0; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
               }
        }
            printf("\nThe frequency of %d is %d",arr[i],count);
            temp=0;
        
        
    }
}