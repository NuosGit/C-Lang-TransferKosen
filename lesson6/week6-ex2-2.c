#include <stdio.h>

int main()
{
    int a, b;

    a = 100;
    b = 100;
    
    printf("%p %p \n", &a, &b);

    if (&a==&b)
    {
        printf("Same as \n");
    }
    else
    {
        printf("Not \n");
    }
    return 0;
}