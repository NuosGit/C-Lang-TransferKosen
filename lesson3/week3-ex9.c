#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Find maximum and minimum element in an array\n ");
    printf("--------------------------------------------\n");
    int i, min = INT_MAX, max = INT_MIN;
    printf("Input number of elements: ");
    scanf("%d", &i);
    int arr[i];
    for (int j = 0; j < i; j++)
    {
        printf("element - %d : ", j);
        scanf("%d", &arr[j]);
    }
    for (int j = 0; j < i; j++)
    {
        if (min > arr[j])
        {
            min = arr[j];
        }
        if (max < arr[j])
        {
            max = arr[j];
        }
    }
    printf("Maximum : %d\n", max);
    printf("Minimum : %d\n", min);

    return 0;
}