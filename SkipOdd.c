#include <stdio.h>

int main(void){
    int size,count=0;
    int count2=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[50];

    for(int i=1; i<=size; i++){

        if(i%4==0){
            arr[count]=i;
            count++;
        }
        

    }
    for(int i=1; i<=count-1; i++){
        for(int j=1; j<=2*i; j++){
            if(arr[count2+1]>size){
                
                         break;
                         }
                         
                else{
                printf("%d ",arr[count2]);
            count2++;
            }
            
        }printf("\n");


        for(int k=1; k<=3*i; k++){
            if(arr[count2+1]>size){
                break;
            }
          
                         else{
                printf("%d\n",arr[count2]);
                count2++;
            }
           
            
        }
    }
}