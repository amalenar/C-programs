#include <stdio.h>
int main(void){

    float totalMark;

    for(int i=0; i<=10; i++){
        printf("\nEnter the total mark percentage :");
    scanf("%f", &totalMark);
    if(totalMark>90){
        printf("A grade");
    }
    else if(totalMark>=80){
        printf("B grade");
    }
    else if(totalMark>=70){
        printf("C grade");
    }
    else if(totalMark>=60){
        printf("D grade");
    }
    else if(totalMark>=50){
        printf("E grade");
    }
     else{
        printf("failed");
     }
    }
}