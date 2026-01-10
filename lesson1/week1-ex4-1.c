#include <stdio.h>

int main()
{
    int a = 1, b = 2;
    float x = 1.5, y = 4.5;

    printf("a + b = %d \t x + y = %.2f\n", a + b, x + y);
    printf("a - b = %d \t x - y = %.2f\n", a - b, x - y);
    printf("a * b = %d \t x * y = %.2f\n", a * b, x * y);
    printf("a / b = %d \t x / y = %.2f\n", a / b, x / y);
    printf("a %% b = %d \t x %% y = %d\n", a % b, (int)x % (int)y);
    printf("a ++ = %d \t x ++ = %.2f\n", ++a, ++x);
    printf("b -- = %d \t y -- = %.2f\n", --b, --y);

    return 0;
}