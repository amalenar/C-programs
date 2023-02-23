#include <stdio.h>

int main(void)
{
    int arr[50];

    int n, sElement, sElement2, count;

    printf("Enter the size of ther aray :");
    scanf("%d", &n);
    printf("Enter the elements of array :");

    for (int i = 0; i <= n - 1; i++)
    {

        scanf("%d", &arr[i]);
    }
    printf("Array :");
    for (int j = 0; j <= n - 1; j++)
    {
        printf("%d ", arr[j]);
    }
    sElement = arr[0];
    int lElement = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {

        if (arr[i] < sElement)
        {

            sElement = arr[i];
        }
        else if (arr[i] > lElement)
        {
            lElement = arr[i];
        }
    }
    printf("smallest element = %d", sElement);
    sElement2 = lElement;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > sElement)
        {

            if (arr[i] < sElement2)
            {
                sElement2 = arr[i];
            }
        }
    }
    printf("\n2nd Smallest element in the array : %d", sElement2);
}