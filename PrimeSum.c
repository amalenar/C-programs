#include <stdio.h>
#include <stdbool.h>

int main(void){
int size,max=0,flag,sum; int arr[50];
printf("Enter the size of the array :");
scanf("%d",&size);
printf("Enter the elements of the array :");
for(int i=0; i<size; i++){
    scanf("%d",&arr[i]);
}

for(int i=0; i<size; i++){
    flag=0;
    for(int j=2; j<arr[i]/2; j++){
        if(arr[i]%j==0){
            flag=1;
            break;
        }
    }

    if(flag ==0){
        sum+=arr[i];
    }
}
while(sum>100){
     max=0;
    for(int i=0; i<size; i++){
    flag=0;
    for(int j=2; j<arr[i]/2; j++){
        if(arr[i]%j==0){
            flag=1;
            break;
        }
    }
    if(flag==0&&arr[i]>max){
        max=arr[i];
    }
    }

    for(int i=0; i<size; i++){
       if(arr[i]==max){
            for(int k=i; k<size;k++){
                arr[k]=arr[k+1];
                }
                size--;
                i--;
       }
    }
    sum= sum-max;
   }

for(int i=0; i<size; i++){
    printf("%d ",arr[i]);
}

    }