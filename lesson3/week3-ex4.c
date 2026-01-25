#include <stdio.h>

int main()
{
    int values[5];

    printf("Enter 5 integer values:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
    }
    printf("You entered:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Value %d: %d\n", i + 1, values[i]);
    }
}