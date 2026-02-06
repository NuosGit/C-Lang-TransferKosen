#include <stdio.h>

int face(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("(^^) ");
    }
}

int main()
{
    int a;
    printf("How many faces do you want ? : ");
    scanf("%d", &a);
    face(a);
}