#include <stdio.h>

int main()
{
    int a[9] = {2,6,8,10,13,217,21,22,27};
    for (int i = 8 ; i >= 0 ; i--)
    {
        printf("%d ", *(a + i)*3);
    }

    return 0;
}