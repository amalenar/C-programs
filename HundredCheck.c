#include <stdio.h>

int main(void){
    int arr[50];
    int flag,sum,temp=1;
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    printf("Enter the elements of the array :");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    for(int i=0; i<size; i++){
            flag=0;
            for(int j=0; j<size; j++){
                if(arr[i]==arr[j]&&i!=j){
                    flag=1;
                    break;
                }
            }

            if(flag==0){
                if(arr[i]%2!=0&&sum>100){
                 
                          for(int k=i; k<size-1; k++){
                        arr[k]=arr[k+1];
                    }size--;
                    
                  
                }
                else if(arr[i]%2==0&&sum<100){
                 
                    for(int k=i; k<size-1; k++){
                        arr[k]=arr[k+1];
                    }size--;
                    
                }
            }
            
                       
                 }
            
printf("The array is :");
for(int i=0; i<=size-1; i++){
    printf("%d ",arr[i]);
}
  

}