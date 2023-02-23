#include <stdio.h>
int main(void){
    char string[50];
   
    int length;
    printf("Enter the string :");
    scanf("%s",string);
    for(int i=0; string[i]!='\0'; i++){
        length++;
    }
 
   for(int i=0; i<length; i++){
     int count= 0;
     for(int j=i; j<=i+count; j++){
          for(int k=i; k<=j; k++){
            printf("%c",string[k]);
          }

          if(count+i<length-1){ count++;}
         
          printf("\n");
        }
   }
}