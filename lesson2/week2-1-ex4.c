#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    if (n1 == n2)
    {
        printf("Result: %d is equal to %d\n", n1, n2);
    }
    else if (n1 > n2)
    {
        printf("Result: %d is greater than %d\n", n1, n2);
    }
    else
    {
        printf("Result: %d is less than %d\n", n1, n2);
    }

    return 0;
}