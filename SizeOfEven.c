#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int array[100],limit,i,value=0;
  
  printf("Enter the size of array :");
  scanf("%d",&limit);
  printf("Enter the values :");
  for(i=0;i<limit;i++){
    scanf("%d",&array[i]);
  }
  for(i=0;i<limit;i++){
    if(array[i]%2==0){
     value++;
      
    }
  }
  printf("Number of even numbers in the given array is :%d",value);
  return (0);
}