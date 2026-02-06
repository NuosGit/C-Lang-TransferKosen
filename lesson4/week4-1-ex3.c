#include <stdio.h>

int star(int count)
{
    for (int i = 0; i < count ; i++)
    {
        printf("*");
    }
}

int main()
{
    int a;
    printf("How many stars do you want ? : ");
    scanf("%d", &a);

    star(a);
}