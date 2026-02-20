#include <stdio.h>

void sum_diff(int n1, int n2, int *sum, int *diff)
{
    *sum = n1+n2;
    *diff = n1-n2;
}

int main()
{
    int n1, n2, sum, diff;
    
    printf("Input 2 Integers:\n");
    printf("int A >> "); scanf("%d", &n1);
    printf("int B >> "); scanf("%d", &n2);

    sum_diff(n1, n2, &sum, &diff);

    printf("Sum : %d\n Diff : %d", sum, diff);
    return 0;
}