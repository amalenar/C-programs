#include <stdio.h>

int main(void){

    int n=50;
    int arr[50];
    int count;
    for(int i=0; i<=n; i++){
        
                 
        arr[i]=i+1;

    }
         for(int i=0; i<n; i++){
            if(arr[i]%5==0){
               
                for(int k=i; k<n-1; k++){
                  
                         arr[k]= arr[k+1];
                  }
               count++;
          
         }
         }

    for(int i=0; i<n-(count+1); i++){
      
        if(arr[i]<=n){ printf("%d ",arr[i]);}
        else{break;}
        
    }
}
