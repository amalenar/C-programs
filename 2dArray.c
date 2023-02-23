#include <stdio.h>

int main(void)
{
    int size = 3;
    int arr1[3][3], arr2[3][3], arrSum[3][3];

    // printf("\nEnter the size of the array : ");
    //  scanf("%d ", &size);
    printf("Enter the elements of arr1 :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("array 1 =\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of arr2 :");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("array 2 =\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {

            arrSum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
       printf("Sum of araryOne and arrayTwo =\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arrSum[i][j]);
        }
        printf("\n");
    }
}