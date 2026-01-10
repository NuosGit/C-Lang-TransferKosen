#include <stdio.h>

int main()
{
    float num1;
    double num2;

    printf("Enter First Number : ");
    scanf("%f", &num1);
    printf("Enter Second Number : ");
    scanf("%lf", &num2);

    printf("Num1 : %f \nNum2 : %lf \n", num1, num2);

    return 0;
}