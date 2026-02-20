#include <stdio.h>

int main()
{
    int hikouza = 5000;
    int *pt;
    pt = &hikouza;

    printf("Before transfer \n");
    printf("Account at Hakodate Bank : %d\n", hikouza);

    *pt = *pt + 10000;

    printf("After transfer \n");
    printf("Account at Hakodate Bank : %d\n", hikouza);
    return 0;
}