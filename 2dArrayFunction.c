#include <stdio.h>

void getArray(int[50][50], int[50][50], int);
void displayArray(int[50][50], int[50][50], int[50][50], int);
void addArray(int[50][50], int[50][50], int[50][50], int);
int main(void)
{
    int size;
    int arrayOne[50][50];
    int arrayTwo[50][50];
    int sumArray[50][50];
    printf("Enter the size of array:");
    scanf("%d", &size);
    getArray(arrayOne, arrayTwo, size);
    addArray(arrayOne, arrayTwo, sumArray, size);
    displayArray(arrayOne, arrayTwo, sumArray, size);
}

void getArray(int array1[50][50], int array2[50][50], int size)
{

    printf("Enter the elements of array1 :");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter the elements of array2 :");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }
}

void displayArray(int array1[50][50], int array2[50][50], int sumArray[50][50], int size)
{

    printf("array 1 =\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }

    printf("array 2 =\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of array =\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", sumArray[i][j]);
        }
        printf("\n");
    }
}

void addArray(int array1[50][50],
              int array2[50][50],
              int sumArray[50][50],
              int size)
{

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {

            sumArray[i][j] = array1[i][j] + array2[i][j];
        }
    }
}