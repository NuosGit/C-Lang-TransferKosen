#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("You entered %d", n);
    }
    printf("The If statement is easy");

    return 0;
}