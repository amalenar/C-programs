#include <stdio.h>

int main(void){
    
    int size;
    int arr1[size],arr2[size];
    int temp;

    printf("Enter the size of the arrays :");
    scanf("%d",&size);
    printf("Enter the elements of first array :");
    for(int i=0; i<size; i++){
        scanf("%d",&arr1[i]);
    }
printf("Enter the elements of second array :");
    for(int i=0; i<=size; i++){
        scanf("%d",&arr2[i]);
    }
 printf("arr1 =");
    for(int i=0; i<=size; i++){
       
        printf("%d ", arr1[i]);
    }
    printf("\n");
     printf("arr2 =");
    for(int i=0; i<=size; i++){
        printf("%d ", arr2[i]);
    }

    for(int i=0; i<=size; i++){
        temp = arr1[i];
        arr1[i]= arr2[i];
        arr2[i]=temp;
    }


    printf("\nAfter interchanging elements of array 1 and 2\n");
 printf("arr1 =");
    for(int i=0; i<=size; i++){
       
        printf("%d ", arr1[i]);
    }
    printf("\n");
     printf("arr2 =");
    for(int i=0; i<=size; i++){
        printf("%d ", arr2[i]);
    }




}