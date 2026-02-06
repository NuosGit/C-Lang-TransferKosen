#include <stdio.h>

int is_odd(void)
{
    int a;
    printf("Input Number : ");
    scanf("%d", &a);
    if (a%2 == 0)
    {   
        return 0;
    }   
    else
    {
        return 1;
    }
}

int main()
{
    if(is_odd())
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
}