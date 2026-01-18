#include <stdio.h>

int main()
{
    int n, result = 0;
    printf("How many input : ");
    scanf("%d", &n);
    int m[n];

    for (int i = 0; i < n ; i++)
    {
        scanf("%d", &m[i]);
        if (m[i] < 0)
        {
            m[i] = 0;
        }
        result += m[i];
    }
    printf("%d", result);
    return 0;
}