#include <stdio.h>
int main(void){
    int size; 
    int arr[50];
    int dupArr[56];
    int count =0;
  

    printf("Enter the size of the aray :");
    scanf("%d",&size);
    printf("Enter the elements of the array :");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }


    for(int i=0; i<=size; i++){
          int temp =0; 
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                   
                 if(arr[i]!=dupArr[count-1]){
                dupArr[count]=arr[i];
               count++;
               temp++;
               }

                    

             
               
            }
        }
        if(temp!=0){
            printf("\nnumber of occurrence of %d is %d",arr[i],temp);
        }
    }

    printf("\nArray elements are :");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\ndupArray elements are :");
   
        for (int i=0; i<=count-1;i++){
            printf("%d ",dupArr[i]);
        }
            
        
        
    }
