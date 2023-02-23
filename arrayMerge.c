#include <stdio.h>

int main(void){

    int arrOne[50],arrTwo[50],n,m;

    printf("Enter the size of ther arayOne :");
    scanf("%d", &n);
    printf("Enter the elements of arrayOne :");

    for(int i=0; i<=n-1; i++){

            scanf("%d",&arrOne[i]);
}
printf("ArrayOne :");
for(int j=0; j<=n-1; j++){
    printf("%d ",arrOne[j]);
}

 printf("\nEnter the size of ther arayTwo :");
    scanf("%d", &m);
    printf("Enter the elements of arrayTwo :");

    for(int i=0; i<=m-1; i++){

            scanf("%d",&arrTwo[i]);
}
printf("\nArrayTwo :");
for(int j=0; j<=m-1; j++){
    printf("%d ",arrTwo[j]);
}


for(int i=0; i<=m-1; i++){
    arrOne[n+i]=arrTwo[i];
}
printf("\nMerged array :");
for(int j=0; j<=n+m-1; j++){
    printf("%d ",arrOne[j]);
}

}