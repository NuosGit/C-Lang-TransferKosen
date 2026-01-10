#include <stdio.h>

int main()
{
    int a;
    float b;

    printf("Input integer and float in order : ");
    scanf("%d%f", &a, &b);
    printf("Integer : %d\nFloat : %.1f\n", a, b);

    return 0;
}