#include <stdio.h>

int main(void){
    int size;
    int count=1;
    int arrCount =0;
    int getArr[100];

    printf("Enter the size of the array");
    scanf("%d",&size);
    int arr[size];

    for(int i=count; i<=size; i++){

        if(i%2!=0){
              count=count+3;
              if(count%2==0){
                arr[arrCount]=count;
                arrCount++;
              }else{
                count=count+3;
              }
            
          
        }
    }
    for(int i =0; i<size; i++){
        printf("%d ",arr[i]);
    }
}