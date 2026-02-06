#include <stdio.h>

int maxtwo(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int max = maxtwo(a, b);
    printf("Max: %d\n", max);
}