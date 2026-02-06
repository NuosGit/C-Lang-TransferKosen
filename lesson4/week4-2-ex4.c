#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


int main()
{
    int r;

    printf("Input Radius Of The Circle : ");
    scanf("%d", &r);

    float area = M_PI * r * r;
    float circumference = 2 * M_PI * r;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
