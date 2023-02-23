#include <stdio.h>

int main(void)
{

    int arr[50], dElements[50], dup[40];
    int size, element, count = 0, count2 = 0;
    printf("Enter the size of the array :");
    scanf("%d", &size);
    printf("Enter the array elements :");

    count = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= size - 1; i++)
    {

        element = arr[i];
        for (int j = i + 1; j <= size - 1; j++)
        {
            if (element == arr[j])
            {
                    for(int k=0; k<=count; k++){

                if (dElements[k] != arr[j])
                {
                    dElements[count] = arr[j];
                    
                }


                    }count++;
               
            }
        }
    }

    for (int l = 0; l <= count - 1; l++)
    {
        printf("%d ", dElements[l]);
    }
}