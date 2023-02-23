#include <stdio.h>

int main(void){
    int large,secLarge,size;
    int arr[50];
printf("Enter the size of the array : ");
scanf("%d",&size);
printf("Enter the elements of the aray : ");
for(int i=0; i<size; i++){
    scanf("%d",&arr[i]);
}
large,secLarge = arr[0];
for(int i=0; i<size; i++){
    if(arr[i]>large){
        large=arr[i];
    }
}
for(int i=0; i<size; i++){
    if(arr[i]<large&&arr[i]>secLarge){
        secLarge=arr[i];
    }
}

printf("\nThe second largest element is : %d",secLarge);

}