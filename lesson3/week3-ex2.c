#include <stdio.h>

int main()
{
    int a[7] = {10, 20, 30, 40, 50, 60, 70};
    printf("a[0]: %d\n", a[0]);
    a[0] = 5;
    printf("a[0]: %d\n", a[0]);
}