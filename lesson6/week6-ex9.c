#include<stdio.h>

int main(void)
{
    int a[6] = {16,17,19,24,60,75};
    int i;
    for (i = 0; i<6; i++)
    {
        printf("%d ", *(a + i));
    }
    printf("\n");
    return 0;
}