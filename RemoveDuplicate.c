#include <stdio.h>

int main(void)
{
    int arr[50];
    static int size;
    printf("Enter the size of the array :");
    scanf("%d", &size);
    printf("Enter the elements of the array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {

                if (i == size)
                {
                    size--;
                }
                else
                {
                    size--;
                    for (int k = i; i < size; k++)
                    {
                        arr[k] = arr[k + 1];
                    }
                }
            }
        }
    }
    printf("The array is : ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}