#include <stdio.h>

void ave_max(int *v, int n, double *ave, int *max)
{
    int sum = 0;
    *max = v[0];

    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (*max < v[i])
            *max = v[i];
    }

    *ave = (double)sum/n;
}
 
int main()
{
    int v, n, max;
    double ave;

    printf("Input number of elements of array : "); scanf("%d", &n);

    int va[n];
    for (int i = 0; i < n; i++)
    {
        printf("Input element %d : ", i+1);
        scanf("%d", &va[i]);
    }

    ave_max(va, n, &ave, &max);
    printf("Average = %.2f\n", ave);
    printf("Maximum = %d\n", max);
}