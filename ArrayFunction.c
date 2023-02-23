#include <stdio.h>

void getArray(int[], int);
void displayArray(int[], int);
int main(void)
{

    int arr[100];
    int size;
    printf("Enter the size of the array :");
    scanf("%d", &size);
    getArray(arr, size);
    displayArray(arr, size);
}
void displayArray(int array[50], int size)
{
    size = size;
    printf("array =");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void getArray(int arr1[50], int size)
{
    size = size;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }
}