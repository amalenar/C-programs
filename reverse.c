#include <stdio.h>

int main(void){

    int arr[50];
    int temp,size;

    printf("Enter the size of the array :");
    scanf("%d",&size);\
    printf("Enter the elements of the array :");

    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is :");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    for(int i=0; i<=size/2; i++){
        temp= arr[i];
         arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }

    printf("\nThe reversed array is :");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }


    for(int i=1; i<=)
}