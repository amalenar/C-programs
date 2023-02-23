#include <stdio.h>

int main(void){

    int arr[100];
    int size,temp;
    printf("Enter the size of the array :");
    scanf("%d", &size);
    printf("Enter the elements :");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Entered array = ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[j]>arr[i]){
                temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
           
        }
    }
    printf("Sorted array = ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

}