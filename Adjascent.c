#include <stdio.h>

int main(void){
    int getArr[20],size,mulArr[20];
printf("Enter the size of the array");
scanf("%d",&size);

for(int i=0; i<size; i++){
    scanf("%d",&getArr[i]);
}
printf("Array = ");
for(int i=0; i<size; i++){
    printf("%d ",getArr[i]);
}

for(int i=0; i<size-1; i++){
    mulArr[i]= getArr[i]*getArr[i+1];
}
printf("\nnew Array after multiplying adjacent elements = ");
for(int i=0; i<size-1; i++){
    printf("%d ",mulArr[i]);
}


}



