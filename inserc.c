#include <stdio.h>

int main(void){
    int arr[50];


    int n,p,element,temp; 

    printf("Enter the size of ther aray :");
    scanf("%d", &n);
    printf("Enter the elements of array :");

    for(int i=0; i<=n-1; i++){

            scanf("%d",&arr[i]);
}
printf("Array :");
for(int j=0; j<=n-1; j++){
    printf("%d ",arr[j]);
}

printf("\nEnter the position you want to enter the element :");
scanf("%d",&p);
printf("\nEnter the element you want to enter :");
scanf("%d",&element);
int m=n;
for(int i=n; i>=p-1; i--){

   arr[i]=arr[i-1];
   
     

}
arr[p-1] = element;

printf("Array after inserting element :");
for(int j=0; j<=n; j++){
    printf("%d ",arr[j]);
}

}